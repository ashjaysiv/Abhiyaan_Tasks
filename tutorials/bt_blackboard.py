import argparse
import operator
import sys
import typing
import py_trees
import py_trees.console as console

def description() -> str:

    content = "Demonstrates usage of the blackboard and related behaviours.\n"
    content += "\n"
    content += "A sequence is populated with a few behaviours that exercise\n"
    content += "reading and writing on the Blackboard in interesting ways.\n"

    if py_trees.console.has_colours:
        banner_line = console.green + "*" * 79 + "\n" + console.reset
        s = banner_line
        s += console.bold_white + "Blackboard".center(79) + "\n" + console.reset
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
        description = description(),
        epilog= epilog(),
        formatter_class = argparse.RawDescriptionHelpFormatter,
    )

    render_group = parser.add_mutually_exclusive_group()
    render_group.add_argument(
        "-r", "--render", action = "store_true", help = "render dot tree to file"
    )
    render_group.add_argument(
        "--render-with-blackboard-variables",
        action = "store_true",
        help = "render dot tree to file with blackboard variables"
    )

    return parser

class Nested(object):
    def __init__(self) -> None:
        # will come as defaults
        self.foo = "bar"

    def __str__(self) -> str:
        return str({"foo": self.foo})
    
class BlackboardWriter(py_trees.behaviour.Behaviour):
    def __init__(self, name: str):
        super().__init__(name=name)
        self.blackboard = self.attach_blackboard_client()
        self.blackboard.register_key(key="dude", access = py_trees.common.Access.READ)
        self.blackboard.register_key(key="spaghetti", access = py_trees.common.Access.WRITE)
        self.logger.debug("%s.__init__()" %(self.__class__.__name__))

    def update(self) -> py_trees.common.Status:
        self.logger.debug("%s.update()" %(self.__class__.__name__))
        
        try:
            _ = self.blackboard.dude
        
        except KeyError:
            pass
        
        try:
            _ = self.blackboard.dudette

        except AttributeError:
            pass

        try:
            self.blackboard.dudette = "Jane"

        except AttributeError:
            pass

        self.blackboard.spaghetti = {"type": "Carbonara", "quantity": 1}
        self.blackboard.spaghetti = {"type": "Gnocchi", "quantity": 2}

        try:
            self.blackboard.set(
                "spaghetti", {"type": "Bolognese", "quantity": 3}, overwrite=False
            )

        except AttributeError:
            pass

        return py_trees.common.Status.SUCCESS
    
class ParamsAndState(py_trees.behaviour.Behaviour):
    def __init__(self, name: str):
        super().__init__(name=name)
        self.parameters = self.attach_blackboard_client("Params", "parameters")
        self.state = self.attach_blackboard_client("State", "state")
        self.parameters.register_key(
            key = "default_speed", access = py_trees.common.Access.READ
        )
        self.state.register_key(
            key="current_speed", access = py_trees.common.Access.WRITE
        )

    def initialise(self) -> None:
        try:
            self.state.current_speed = self.parameters.default_speed

        except KeyError as e:
            raise RuntimeError(
                "parameter 'default_speed' not found [{}]". format(str(e))
            )
        
    def update(self) -> py_trees.common.Status:
        if self.state.current_speed > 40.0:
            return py_trees.common.Status.SUCCESS
        else:
            return py_trees.common.Status.RUNNING
        
def create_root()->py_trees.behaviour.Behaviour:
    root = py_trees.composites.Sequence(name="Blackboard Demo", memory = True)        
    
    set_blackboard_variable = py_trees.behaviours.SetBlackboardVariable(
        name = 'Set Nested',
        variable_name = "nested",
        variable_value = Nested(),
        overwrite= True,
    )

    check_blackboard_variable = py_trees.behaviours.CheckBlackboardVariableValue(
        name="Check Nested Foo",
        check = py_trees.common.ComparisonExpression(
        variable = "nested.foo", value = "bar", operator = operator.eq
        ),
    )

    write_blackboard_variable = BlackboardWriter(name="Writer")

    params_and_state = ParamsAndState(name="ParamsAndState")
    
    root.add_children(
        [
            set_blackboard_variable,
            write_blackboard_variable,
            check_blackboard_variable,
            params_and_state
        ]
    )

    return root
    
def main() -> None:
    args = command_line_argument_parser().parse_args()
    print(description())
    py_trees.logging.level = py_trees.logging.Level.DEBUG
    py_trees.blackboard.Blackboard.enable_activity_stream(maximum_size=100)
    blackboard = py_trees.blackboard.Client(name="Configuration")
    blackboard.register_key(key="dude", access = py_trees.common.Access.WRITE)
    blackboard.register_key(key="/parameters/default_speed", access=py_trees.common.Access.EXCLUSIVE_WRITE)
    blackboard.dude = "Bob"
    blackboard.parameters.default_speed = 30.0

    root = create_root()

    if args.render:
        py_trees.display.render_dot_tree(root, with_blackboard_variables=False)
    if args.render_with_blackboard_variables:
        py_trees.display.render_dot_tree(root, with_blackboard_variables=True)
        sys.exit()
    
    root.setup_with_descendants()
    unset_blackboard = py_trees.blackboard.Client(name="Unsetter")
    unset_blackboard.register_key(key="foo", access = py_trees.common.Access.WRITE)
    print("\n--------- Tick 0 ---------\n")
    root.tick_once()
    print("\n")
    print(py_trees.display.unicode_tree(root, show_status=True))
    print("--------------------------\n")
    print(py_trees.display.unicode_blackboard())
    print("--------------------------\n")
    print(py_trees.display.unicode_blackboard(display_only_key_metadata=True))
    print("--------------------------\n")
    unset_blackboard.unset("foo")
    print(py_trees.display.unicode_blackboard_activity_stream())

main()
