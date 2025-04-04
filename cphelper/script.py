#! /usr/bin/python
import os
import argparse
import subprocess
from shlex import split
from datetime import datetime

HOME = os.path.expanduser("~")
TEMPLATE_DIR = f"{HOME}/Contest-Archive/CPTEMPLATES"
SELECTED_TEMPLATE = "codeforces.cpp"
COMPILER_PROPS = {"c": ["gcc", "c11"], "cpp": ["g++", "c++17"]}
COMPILATION_STRING = "{} -std={} -static -DONLINE_JUDGE -fno-asm -lm -s -W -O2 -Wall -Wextra -Wno-unused-variable -Wno-unused-function {} -o {}"
COMPATIBLE_EXTENSIONS = ["c", "cpp"]


def format_build_string(extension: str, name: str) -> list[str]:
    source_file = os.path.join(os.getcwd(), f"{name}.{extension}")
    compiler, version = COMPILER_PROPS[extension]
    return split(COMPILATION_STRING.format(compiler, version, source_file, name))


def is_executable(name: str) -> bool:
    if not os.path.exists(os.path.join(os.getcwd(), name)):
        return False

    if not os.path.isfile(os.path.join(os.getcwd(), name)):
        return False

    command = f"file {name}"
    output = subprocess.run(split(command), capture_output=True)
    output = output.stdout.decode()

    return True if "executable" in output else False


def format_solution(buffer: list[str]) -> str:
    now = datetime.now().strftime("%d/%m/%Y : %H:%M:%S")
    host = os.uname().nodename  # usar socket.gethostname()

    formatted = []
    replaced = False

    for line in buffer:
        if not replaced and line.strip().startswith("/*"):
            formatted.append(
                f"/*\n *  Created by: {host}\n *  Created At: {now}\n */\n"
            )
            replaced = True
            skip = True
            continue
        if replaced and line.strip().startswith("*"):
            continue
        if replaced and line.strip().startswith("*/"):
            continue
        formatted.append(line)

    return "".join(formatted)


def extract_test_cases(test_cases: list[str]) -> list[str]:
    if len(test_cases) == 1:
        if os.path.isdir(test_cases[0]):
            test_cases = [
                os.path.join(os.getcwd(), x) for x in os.listdir(test_cases[0])
            ]
    return test_cases


def execute_solution(name: str, test_cases: list[str]):
    if not is_executable(name):
        print(f"Error: {name} is not an executable")
        return

    test_cases = extract_test_cases(test_cases)

    if not test_cases:
        print("No test cases provided. Enter input manually:")
        try:
            subprocess.run(os.path.join(os.getcwd(), name), text=True)
        except KeyboardInterrupt:
            print("\n>>> Execution cancelled.")
        return

    for case in test_cases:
        case_name = case.split("/")[-1]
        print(f"Executing {case_name}...")
        with open(case, "r") as file:
            try:
                result = subprocess.run(
                    os.path.join(os.getcwd(), name),
                    stdin=file,
                    capture_output=True,
                    text=True,
                    timeout=4,  # por si se cuelga
                )
                print(">>> Result:")
                print(result.stdout.strip())
                if result.stderr:
                    print(">>> Errors:")
                    print(result.stderr.strip())
            except subprocess.TimeoutExpired:
                print(">>> Execution timed out.")


def compile_code(name: str):
    if not os.path.exists(name) or not os.path.isfile(name):
        print("Error: The source file does not exis")
        return

    if name.split(".")[-1].lower() not in COMPATIBLE_EXTENSIONS:
        print("Error: The source file is not compatible")
        return
    name, extension = name.rsplit(".", 1)
    build_string = format_build_string(extension.lower(), name)
    print(f"Compiling {name}...")
    try:
        result = subprocess.run(build_string, timeout=10, capture_output=True)
        if result.stderr:
            print(f"Failed to compile {name}")
            print(result.stderr.decode().strip())
            return
        print(">>> Compilation finished")
    except subprocess.TimeoutExpired:
        print(">>> compilation time out.")
    pass


def create_solution(name: str):
    with open(os.path.join(TEMPLATE_DIR, SELECTED_TEMPLATE), "r") as file:
        buffer = file.readlines()
        formatted_code = format_solution(buffer)

    if len(name.split(".")) == 1:
        name += ".cpp"
    with open(name, "+w") as outbuffer:
        outbuffer.write(formatted_code)


def main():
    parser = argparse.ArgumentParser(
        prog="cphelper",
        description="tools to create, compile and run cp solutions in c/c++",
    )
    parser.add_argument(
        "default", nargs="?", type=str, help="create new solution from template"
    )
    parser.add_argument("--build", "-b", type=str, help="compile a c/c++ file")
    parser.add_argument(
        "--run",
        "-r",
        nargs=argparse.REMAINDER,
        help="run solution with testcases if there are exists oterwise print no test cases and launch cmdline",
    )
    args = parser.parse_args()

    if args.build:
        compile_code(args.default)

    if args.run:
        executable = args.run[0]
        test_cases = args.run[1:]
        execute_solution(executable, test_cases)

    if args.default:
        print(f"Created: {args.default} on {os.getcwd()}")
        create_solution(args.default)


if __name__ == "__main__":
    main()
