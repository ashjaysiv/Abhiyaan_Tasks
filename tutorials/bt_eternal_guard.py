import argparse
import functools
import sys
import time
import typing
import py_trees
import py_trees.console as console

def description(root: py_trees.behaviour.Behaviour) -> str:

    content = "A demonstration of the 'eternal guard' concept.\n\n"
    content += "Two binary (F|S) conditional checks will fire every\n"
    content += "tick, thus providing a fail-fast mechanism for the\n"
    content += "long running sequence of tasks behind them.\n"
    content += "\n"

    if py_trees.console.has_colours:
        banner_line = console.green + "*" * 79 + "\n" + console.reset
        s = banner_line
        s += console.bold_white + "Eternal Guard".center(79) + "\n" + console.reset
        s += banner_line
        s += "\n"
        s += content
        s += "\n"
        s += py_trees.display.unicode_tree(root)
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
        description=description(create_root()),
        epilog=epilog(),
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )

    group = parser.add_mutually_exclusive_group()
    group.add_argument(
        "-r", "--render", action="store_true", help="render dot tree to file"
    )
    group.add_argument(
        "-i",
        "--interactive",
        action="store_true",
        help="pause and wait for keypress at each tick",
    )

    return parser

def pre_tick_handler(behaviour_tree: py_trees.trees.BehaviourTree) -> None:
    print("\n--------- Run %s ---------\n" % behaviour_tree.count)

def post_tick_handler(
    snapshot_visitor: py_trees.visitors.SnapshotVisitor,
    behaviour_tree: py_trees.trees.BehaviourTree,
) -> None:

    print(
        "\n"
        + py_trees.display.unicode_tree(
            root=behaviour_tree.root,
            visited=snapshot_visitor.visited,
            previously_visited=snapshot_visitor.previously_visited,
        )
    )
    print(py_trees.display.unicode_blackboard())

def create_root() -> py_trees.behaviour.Behaviour:
    eternal_guard = py_trees.composites.Sequence(name = "Eternal Guard", memory = False)
    condition_one = py_trees.behaviours.StatusQueue(
        name = "Condition 1",
        queue = [
            py_trees.common.Status.SUCCESS,
            py_trees.common.Status.FAILURE,
            py_trees.common.Status.SUCCESS,
        ],
        eventually= py_trees.common.Status.SUCCESS
    ) 

    condition_two = py_trees.behaviours.StatusQueue(
        name = "Condition 2",
        queue = [
            py_trees.common.Status.SUCCESS,
            py_trees.common.Status.SUCCESS,
            py_trees.common.Status.FAILURE,
        ],
        eventually= py_trees.common.Status.SUCCESS,
    )

    task_sequence = py_trees.composites.Sequence(name = "Task Sequence", memory = True)
    task_one = py_trees.behaviours.Success(name = "Worker 1")
    task_two = py_trees.behaviours.Success(name = "Worker 2")

    eternal_guard.add_children([condition_one, condition_two, task_sequence])
    task_sequence.add_children([task_one, task_two])
    return eternal_guard

def main()->None:
    args = command_line_argument_parser().parse_args()
    root = create_root()
    print(description(root))

    if args.render:
        py_trees.display.render_dot_tree(root)
        sys.exit()

    behaviour_tree = py_trees.trees.BehaviourTree(root)
    behaviour_tree.add_pre_tick_handler(pre_tick_handler)
    behaviour_tree.visitors.append(py_trees.visitors.DebugVisitor())
    snapshot_visitor = py_trees.visitors.SnapshotVisitor()
    behaviour_tree.add_post_tick_handler(
        functools.partial(post_tick_handler, snapshot_visitor)
    )
    behaviour_tree.visitors.append(snapshot_visitor)
    behaviour_tree.setup(timeout = 15)

    if args.interactive:

        py_trees.console.read_single_keypress()

    for _unused_i in range(1, 11):

        try:
            behaviour_tree.tick()

            if args.interactive:
                py_trees.console.read_single_keypress()
            else:
                time.sleep(0.5)

        except KeyboardInterrupt:
            break
    print("\n")

main()
    
# 1 1
# 0 X
# 1 1
# 1 1
# eventually success