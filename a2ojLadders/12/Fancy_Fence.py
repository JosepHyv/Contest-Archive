for _ in range(int(input())):
	k = int(input())
	if k == 180:
		print("NO")
	elif 360 % ( 180 - k ) == 0:
		print("YES")
	else:
		print("NO")