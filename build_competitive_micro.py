#!/usr/bin/python
import os
import sys
import shlex
import psutil 
import pathlib
import subprocess
from pprint import pprint

class micro:
    def __init__(self):
        self.is_running = True if self.proccess_pid() != None else False
        self.pid = self.proccess_pid()
        self.file = self.file_name()
        self.path = self.get_file_path()
        
    def __str__(self):
        return "running:{}, pid:{} file_name: {} path: {}".format(self.is_running, self.pid, self.file, self.path)

    def proccess_pid(self):
        proceso = list(psutil.process_iter())
        process_list = []
        for p in proceso:
            if p.name().lower() == "micro":
                process_list.append(p.pid)
        if len(process_list) > 1:
            return process_list
        elif len(process_list):
            return process_list[0]
        else:
            return None

    def file_name(self):
        if self.is_running == None:
            return None
        file_names = []
        if 'list' in str(type(self.pid)):
            for current in self.pid:
                process = psutil.Process(current)
                file_names.append(process.cmdline()[1])
            return file_names
        else:
            proceso = psutil.Process(self.pid)
            return proceso.cmdline()[1] 
        return None

    def get_file_path(self):
        if self.is_running == None:
            return None
        file_paths = []
        if 'list' in str(type(self.pid)):
            for current in self.pid:
                process = psutil.Process(current)
                file_paths.append(pathlib.Path(process.cwd()))
            return file_paths
        else:
            proceso = psutil.Process(self.pid)    
            return pathlib.Path(proceso.cwd()) 
        return None 

    def number_process(self):
        if not  self.is_running:
            return 0

        if 'list' in str(type(self.pid)):
            return len(self.pid)
        return 1

    def check_pid(self, pid):
        return psutil.pid_exists(pid)

    def file_is_open(self, file_name):
        if self.is_running:
            if self.number_process() > 1:
                number = self.file.index(file_name)
                return self.check_pid(self.pid[number])
            else:  
                return self.check_pid(self.pid)
        return False


def compile():

    filex_extension = ['cpp', 'cc']
    micro_process = micro()
    file = None
    path_file = None
    if not micro_process.is_running:
        sys.stderr.write('No process running')
        exit(0)        
    if micro_process.number_process() > 1:
        for current in len(micro_process.path):
            if 'contest-archive' in str(micro_process.path(current)).lower() and os.path.splitext(micro_process.file[current])[1].lower() in file_extension:
                file = micro_process.file[current]
                path_file = micro_process.path[current]
                break
        if file == None:
            sys.stderr.write('No competitive Programming files found')
            exit(1)
    else:
        file = micro_process.file
        path_file = micro_process.path

    compilation_line = 'g++ -std=gnu++17 {} {} -o {}'

    flags = [
        '-Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -ggdb3 -fmax-errors=2'
    ] 
    exec_name = 'a'
    
    if micro_process.file_is_open(file): 
        file = os.path.join(path_file, file)
        path_file = os.path.join(path_file, exec_name)
        compilation_line = compilation_line.format(' '.join(flags), file, path_file)
        shellArgs = shlex.split(compilation_line)
        #print('======debuging=====')
        #sys.stdout.write(str(shellArgs) + '\n')
        try:
            process = subprocess.Popen(
                shellArgs,
                stderr=subprocess.PIPE
             )
            stderr = process.communicate()
            if stderr[1]:
                sys.stderr.write(stderr[1].decode())
                exit(1)
            else:
                sys.stderr.write("compilation finish")
                exit(0)
        except Exception as e:
            sys.stderr.write('Excepcion lanzada \n {}'.format(e))
            exit(1)
        
    else:
        sys.stderr.write('No competitive Programming files found')
        exit(0)




compile()


