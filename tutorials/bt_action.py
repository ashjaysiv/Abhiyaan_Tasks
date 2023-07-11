import argparse
import atexit
import multiprocessing
import multiprocessing.connection
import time
import typing
import py_trees.common
import py_trees.console as console


def description() -> str:
    """
    Print description and usage information about the program.
    Returns:
       the program description string
    """
    content = "Demonstrates the characteristics of a typical 'action' behaviour.\n"
    content += "\n"
    content += "* Mocks an external process and connects to it in the setup() method\n"
    content += (
        "* Kickstarts new goals with the external process in the initialise() method\n"
    )
    content += "* Monitors the ongoing goal status in the update() method\n"
    content += (
        "* Determines RUNNING/SUCCESS pending feedback from the external process\n"
    )

    if py_trees.console.has_colours:
        banner_line = console.green + "*" * 79 + "\n" + console.reset
        s = banner_line
        s += console.bold_white + "Action Behaviour".center(79) + "\n" + console.reset
        s += banner_line
        s += "\n"
        s += content
        s += "\n"
        s += banner_line

    else:
        s = content

    return s

def epilog() -> typing.Optional[str]:
    if py_trees.console.has_colours:
        return (
            console.cyan 
            + "And his noodly appendage reached forth to tickle the blessed...\n"
            + console.reset
        )
    
    else:
        return None
    
def command_line_argument_parser() -> argparse.ArgumentParser:
    
    return argparse.ArgumentParser(
        description = description(),
        epilog = epilog(),
        formatter_class= argparse.RawDescriptionHelpFormatter
    )

def planning(pipe_connection: multiprocessing.connection.Connection):
    idle = True
    percentage_complete = 0
    try:
        while True:
            """ poll([timeout]) : Return whether there is any data available to be read."""
            if pipe_connection.poll():
                pipe_connection.recv()
                percentage_complete = 0
                idle = False
            if not idle:
                percentage_complete += 10
                """ send(obj) : Send an object to the other end of the connection which should be read using recv()."""
                pipe_connection.send([percentage_complete])
                if percentage_complete == 100:
                    idle = True
            
            time.sleep(0.5)
    
    except KeyboardInterrupt:
        pass


class Action(py_trees.behaviour.Behaviour):

    def __init__(self, name:str):
        super(Action, self).__init__(name)
        self.logger.debug("%s.__init__()" % (self.__class__.__name__))

    def setup(self, **kwargs: int) -> None:
        self.logger.debug("%s.setup()->connections to an external process" %self.__class__.__name__)
        """The Pipe() function returns a pair of connection objects connected by a pipe which by default is duplex (two-way)"""
        self.parent_connection, self.child_connection = multiprocessing.Pipe()
        self.planning = multiprocessing.Process(
            target = planning,  args = (self.child_connection, )
        )
        atexit.register(self.planning.terminate)
        self.planning.start()

    def initialise(self) -> None:
        self.logger.debug(
            "%s.initialise()->sending new goal" % (self.__class__.__name__)
        )
        self.parent_connection.send(['new goal'])
        self.percentage_completion = 0

    def update(self) ->py_trees.common.Status:
        new_status = py_trees.common.Status.RUNNING
        if self.parent_connection.poll():
            self.percentage_completion = self.parent_connection.recv().pop()
            if self.percentage_completion == 100:
                new_status = py_trees.common.Status.SUCCESS
            if new_status == py_trees.common.Status.SUCCESS:
                self.feedback_message = "Processing Finished"
                self.logger.debug(
                    "%s.update()[%s -> %s][%s]"
                    %(
                        self.__class__.__name__,
                        self.status,
                        new_status,
                        self.feedback_message
                    )
                )
            else:
                self.feedback_message = "{0}%".format(self.percentage_completion)
                self.logger.debug(
                    "%s.update()[%s][%s]"
                    %(self.__class__.__name__, self.status, self.feedback_message)
                )
            
            return new_status
        
    def terminate(self, new_status: py_trees.common.Status) -> None:
        self.logger.debug(
            "%s.terminate()[%s -> %s]"
            %(self.__class__.__name__, self.status, new_status)
        )

def main() -> None:
    command_line_argument_parser().parse_args()

    print(description())
    py_trees.logging.level = py_trees.logging.Level.DEBUG

    action = Action(name="Action")
    action.setup()

    try:
        for _unused_i in range(0,12):
            action.tick_once()
            time.sleep(0.5)
            print("\n")
    except KeyboardInterrupt:
        pass

main()
