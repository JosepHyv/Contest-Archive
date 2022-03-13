#!/usr/bin/python

import os 
import shutil
import pathlib

CODES = [".py", ".cpp", ".c", ".java", ".cc", ".sh"]

def pathDir():
    return str(os.path.abspath(os.getcwd()))

def getListFile(dirs):
    files = os.listdir(dirs)
    for c in range(len(files)):
        fileName = files[c]
        fileName = str(os.path.join(pathDir(), fileName))
        files[c] = fileName
    return files

def separeDirsFiles(lista):
    directorios = []
    archivos = []
    for element in lista:
        if os.path.isdir(element):
            directorios.append(element)
        else:
            archivos.append(element)
    return directorios, archivos



def eraseFiles(lista):
    for element in lista:
        extension = str(pathlib.Path(element).suffix)
        extension = extension.lower()
        print("{} tiene -> {}".format(element, extension))
        if not extension in CODES:
            try:
                os.remove(element)
            except OSError as error:
                print("{} no pudo eliminarse".format(element))

    pass


def eraser():
    print("\n=========\nejecutando en {}".format(pathDir()))
    lista = getListFile(pathDir())
    directorios, archivos = separeDirsFiles(lista)
    eraseFiles(archivos)
    if not len(directorios):
        return 
    for element in directorios:
        if not ".git" in element:
            os.chdir(element)
            eraser()


eraser()
    
