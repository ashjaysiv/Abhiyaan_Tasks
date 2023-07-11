import argparse
import sys
import time
import typing
import py_trees
import py_trees.console as console

def description() -> str:

    content = "Demonstrates context switching with parallels and sequences.\n"
    content += "\n"
    content += (
        "A context switching behaviour is run in parallel with a work sequence.\n"
    )
    content += (
        "Switching the context occurs in the initialise() and terminate() methods\n"
    )
    content += (
        "of the context switching behaviour. Note that whether the sequence results\n"
    )
    content += (
        "in failure or success, the context switch behaviour will always call the\n"
    )
    content += (
        "terminate() method to restore the context. It will also call terminate()\n"
    )
    content += (
        "to restore the context in the event of a higher priority parent cancelling\n"
    )
    content += "this parallel subtree.\n"

    if py_trees.console.has_colours:
        banner_line = console.green + "*" * 79 + "\n" + console.reset
        s = banner_line
        s += console.bold_white + "Context Switching".center(79) + "\n" + console.reset
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

    parser = argparse.ArgumentParser(
        description=description(),
        epilog=epilog(),
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )

    parser.add_argument(
       "-r", "--render", action="store_true", help="render dot tree to file"
    )
    return parser
    
class ContextSwitch(py_trees.behaviour.Behaviour):
    def __init__(self, name:str = "ContextSwitch"):
        super(ContextSwitch, self).__init__(name)
        self.feedback_message = "no context"

    def initialise(self) -> None:
        self.logger.debug("%s.initialise()[switch context]" % (self.__class__.__name__))
        self.feedback_message = "new_context"

    def update(self) -> py_trees.common.Status:
        self.logger.debug(
            "%s.update()[RUNNING][%s]" 
            % (self.__class__.__name__, self.feedback_message) 
        ) 
        return py_trees.common.Status.RUNNING
    
    def terminate(self, new_status: py_trees.common.Status) -> None:
        self.logger.debug(
            "%s.terminate()[%s -> %s][restore context]"
            % (self.__class__.__name__, self.status, new_status)
        )
        self.feedback_message = "restored context"
       
    
def create_root() -> py_trees.behaviour.Behaviour:
    root = py_trees.composites.Parallel(
        name="Parallel", policy = py_trees.common.ParallelPolicy.SuccessOnOne()
    )
    context_switch = ContextSwitch(name ="context")
    sequence = py_trees.composites.Sequence(name = "Sequence", memory = True)
    for job in ["Action 1", "Action 2"]:
        success_after_two = py_trees.behaviours.StatusQueue(
            name = job,
            queue = [py_trees.common.Status.RUNNING, py_trees.common.Status.RUNNING ],
            eventually=py_trees.common.Status.SUCCESS,
        )
        sequence.add_child(success_after_two)
    root.add_child(context_switch)
    root.add_child(sequence)
    return root
    
def main() -> None:
    args = command_line_argument_parser().parse_args()
    print(description())
    py_trees.logging.level = py_trees.logging.Level.DEBUG
    
    root = create_root()

    if args.render:
        py_trees.display.render_dot_tree(root)
        sys.exit()
    
    root.setup_with_descendants()
    for i in range(1,6):
        try:
            print("\n--------- Tick {0} ---------\n".format(i))
            root.tick_once()
            print("\n")
            print("{}".format(py_trees.display.unicode_tree(root, show_status=True)))
            time.sleep(1.0)

        except KeyboardInterrupt:
            break

    print("\n")

main()
            