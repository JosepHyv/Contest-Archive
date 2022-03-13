
t = 0 
t = int(input())
while t:

	n ,m = map( int , input().split())
	n += 2
	m += 1
	print( (m * ((n * ( n-1)) // 2)) % 1000000007)
	t -= 1