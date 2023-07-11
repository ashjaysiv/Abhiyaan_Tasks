import argparse
import subprocess
import typing
import py_trees
import py_trees.console as console

"""
In the context of behavior trees, a blackbox refers to a node that 
encapsulates a complex or external behavior within the tree. It is 
called a "blackbox" because the inner workings of the behavior are 
hidden or abstracted away, and the node itself appears as a single 
unit without exposing its internal details.

The purpose of using a blackbox node in a behavior tree is to provide
a high-level representation of a behavior or action that may involve
multiple steps or external systems. It allows the behavior tree 
designer to focus on the overall structure and logic of the tree 
without getting bogged down in the specific implementation details.

Typically, a blackbox node has input and output ports that enable 
communication with the rest of the behavior tree. The inputs may 
include parameters or conditions necessary for executing the 
encapsulated behavior, while the outputs could indicate the success 
or failure of the behavior.

Blackbox nodes are often used to integrate complex behaviors, such as
pathfinding algorithms, physics simulations, or external system
interactions, into the behavior tree framework. By encapsulating 
these behaviors within blackbox nodes, the overall structure of the 
tree remains manageable, modular, and easier to understand and 
maintain.
"""

def description() -> str:
    name = "py-trees-demo-dot-graphs"
    content = "Renders a dot graph for a simple tree, with blackboxes.\n"

    if py_trees.console.has_colours:
        banner_line = console.green + "*" * 79 + "\n" + console.reset
        s = banner_line
        s += console.bold_white + "Dot Graphs".center(79) + "\n" + console.reset
        s += banner_line
        s += "\n"
        s += content
        s += "\n"
        s += console.white
        s += console.bold + "    Generate Full Dot Graph" + console.reset + "\n"
        s += "\n"
        s += console.cyan + "        {0}".format(name) + console.reset + "\n"
        s += "\n"
        s += console.bold + "    With Varying Visibility Levels" + console.reset + "\n"
        s += "\n"
        s += (
            console.cyan
            + "        {0}".format(name)
            + console.yellow
            + " --level=all"
            + console.reset
            + "\n"
        )

        s += (
            console.cyan
            + "        {0}".format(name)
            + console.yellow
            + " --level=detail"
            + console.reset
            + "\n"
        )

        s += (
            console.cyan
            + "        {0}".format(name)
            + console.yellow
            + " --level=component"
            + console.reset
            + "\n"
        )

        s += (
            console.cyan
            + "        {0}".format(name)
            + console.yellow
            + " --level=big_picture"
            + console.reset
            + "\n"
        )

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
        "-l",
        "--level",
        action="store",
        default="fine_detail",
        choices=["all", "fine_detail", "detail", "component", "big_picture"],
        help="visibility level",
    )

    return parser 

def create_tree(level: str) -> py_trees.behaviour.Behaviour:
    root = py_trees.composites.Selector(name="Demo Dot Graphs %s" % level, memory = False)
    first_blackbox = py_trees.composites.Sequence(name="BlackBox 1", memory = True)
    
    first_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    first_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    first_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    """~py_trees.behaviours.Behaviour.blackbox_level (BlackBoxLevel) – a helper 
        variable for dot graphs and runtime gui’s to collapse/explode 
        entire subtrees dependent upon the blackbox level."""
    
    first_blackbox.blackbox_level = py_trees.common.BlackBoxLevel.BIG_PICTURE

    second_blackbox = py_trees.composites.Sequence(name = "Blackbox 2", memory = True)
    second_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    second_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    second_blackbox.add_child(py_trees.behaviours.Running("Worker"))

    second_blackbox.blackbox_level = py_trees.common.BlackBoxLevel.BIG_PICTURE

    third_blackbox = py_trees.composites.Sequence(name = "Blackbox 3", memory = True)
    third_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    third_blackbox.add_child(py_trees.behaviours.Running("Worker"))
    third_blackbox.add_child(py_trees.behaviours.Running("Worker"))

    third_blackbox.blackbox_level = py_trees.common.BlackBoxLevel.BIG_PICTURE

    root.add_child(first_blackbox)
    root.add_child(second_blackbox)
    first_blackbox.add_child(third_blackbox)
    return root

def main() -> None:
    args = command_line_argument_parser().parse_args()
    args.enum_level = py_trees.common.string_to_visibility_level(args.level)
    print(description())
    py_trees.logging.level = py_trees.logging.Level.DEBUG

    root = create_tree(args.level)
    py_trees.display.render_dot_tree(root, args.enum_level)

    """
    In your example, py_trees.utilities.which("xdot") is attempting 
    to find the path to the "xdot" program. If the "xdot" program is 
    installed and available in your system's PATH, the function will 
    return the path to the executable. If "xdot" is not found or not 
    installed, the function will return None.
    """
    if py_trees.utilities.which("xdot"):
        try:
            subprocess.call(["xdot", "demo_dot_graphs_%s.dot" % args.level])
        except KeyboardInterrupt:
            pass

    else:
        print("")
        console.logerror(
            "No xdot viewer found, skipping display"
        )

main()

