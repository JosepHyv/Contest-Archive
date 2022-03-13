from random import randrange 

n = randrange(100) 
print(n)
for _ in range(n):
	print(randrange(1000) % 2 , end=" ")
