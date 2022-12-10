n = int(input())

while n > 0:
	n -= 1 
	line = input()
	ans = ""
	bolds = 0 
	italics = 0 
	for c in line:
		if c == '*':
			if bolds % 2:
				ans += '</b>'
			else:
				ans += '<b>'
			bolds += 1
		elif c == '_':
			if italics % 2:
				ans += '</i>'
			else:
				ans += '<i>'
			italics += 1
		else:
			ans += c

	print(ans)