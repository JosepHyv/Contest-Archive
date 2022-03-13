def fact( x ):
	k = 1
	for c in range( 1, x+1):
		k = k*c
	return int(k)

for c in range(1, 36):
	print(c, int(fact(c)))