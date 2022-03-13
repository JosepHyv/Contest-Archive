#! /usr/bin/python3

def pal(linea):
	return linea == linea[::-1]


def main():
	text = input()
	print( pal(text), len(text)) 

if __name__ == "__main__":
	main()	
