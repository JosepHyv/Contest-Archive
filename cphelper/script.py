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
COMPILATION_STRING = "{} -std{} -static -DONLINE_JUDGE -fno-asm -lm -s -Wl,--stack=268435456 -O2 -Wall -Wextra -Wno-unused-variable -Wno-unused-function {} -o {}"


def format_build_string(extension: str, name: str) -> str:
    source_file = f"{name}{extension}"
    compiler = COMPILER_PROPS[extension][0]
    version = COMPILER_PROPS[extension][1]
    return COMPILATION_STRING.format(compiler, version, source_file, name)


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
    pass


def extract_test_cases(test_cases: list[str]) -> list[str]:
    if len(test_cases) == 1:
        if os.path.isdir(test_cases[0]):
            test_cases = [
                os.path.join(os.getcwd(), x) for x in os.listdir(test_cases[0])
            ]
    return test_cases


def execute_solution(name: str, test_cases: list[str]):
    if not is_executable(name):
        print(f"Error: {name} is nor an executable or there is no existe")
        return

    test_cases = extract_test_cases(test_cases)
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
    name, extension = name.split(".")
    build_string = format_build_string(extension.lower(), name)
    try:
        result = subprocess.run(build_string, timeout=10, capture_output=True)
        if result.stderr:
            print(f"Failed to compile {name}")
            print(result.stderr.strip())
            return
    except subprocess.TimeoutExpired:
        print(">>> compilation time out.")
    pass


def create_solution(name: str):
    with open(f"{TEMPLATE_DIR}/{SELECTED_TEMPLATE}", "r") as file:
        # buffer = format_solution(file)
        if len(name.split(".")) == 1:
            name += ".cpp"
        with open(name, "+w") as outbuffer:
            outbuffer.write(file.read())


def main():
    parser = argparse.ArgumentParser(
        prog="cphelper",
        description="tools to create, compile and run cp solutions in c/c++",
    )
    parser.add_argument("default", nargs="?", type=str, help="compile a c/c++ file")
    parser.add_argument(
        "--new", "-n", type=str, help="create new solution from template"
    )
    parser.add_argument(
        "--run",
        "-r",
        nargs=argparse.REMAINDER,
        help="run solution with testcases if there are exists oterwise print no test cases and launch cmdline",
    )
    args = parser.parse_args()

    if args.new:
        print(f"Created: {args.new} on {os.getcwd()}")
        create_solution(args.new)

    if args.run:
        print(args.run)


if __name__ == "__main__":
    main()
