#!/usr/bin/python
import os 
import shutil 
import subprocess

direccion = str(os.path.abspath(os.getcwd()))
stuff = os.listdir()
inputs = []

for x in stuff:
	if not os.path.isdir(x) and ( ".in" in x or ".txt" in x):
		inputs.append(x)

saved_inputs = os.path.join(direccion, "inputs")
saved_outputs = os.path.join(direccion, "outputs")

if len(inputs):
	if not os.path.isdir(saved_inputs):
		os.mkdir(saved_inputs)

	if not os.path.isdir(saved_outputs):
		os.mkdir(saved_outputs)

	for element in inputs:
		origen = os.path.join(direccion, element)
		destino = os.path.join(saved_inputs, element)
		if not os.path.exists(destino):
			shutil.move(origen, destino)


inputs = os.listdir(saved_inputs)
print(inputs)




