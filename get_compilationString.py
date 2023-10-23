#!/usr/bin/python
import json 

jsonFile = None 

with open('CPcompilation.php') as file:
    jsonFile = json.load(file)


compilation  = " ".join(jsonFile['cmd'])

print(compilation)
