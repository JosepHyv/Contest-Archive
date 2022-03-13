n = list(map(int, input().split()))
maxi = -1
posi = -1
for c in range(0,len(n)):
	if n[c] > maxi:
		maxi = n[c]
		posi = c

print(maxi, posi)