#!/usr/bin/python
import os 
import shutil 

direccion = str(os.path.abspath(os.getcwd()))
stuff = os.listdir()
print(*stuff, direccion)