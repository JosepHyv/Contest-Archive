n,m = map( int, input().split())

aux = n - m
while n > aux:
	print(n, end=" ")
	n -= 1

n = 1
while n <= aux:
	print(n, end=" ")
	n+=1
	