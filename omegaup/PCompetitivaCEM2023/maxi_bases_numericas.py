def calculate(b,n):
    ans = 0
    for curr in range(n):
        ans += (b-1) * (b ** curr)
    return ans

t = int(input())
for _ in range(t):
    line = input()
    a,b = [int(x) for x in line.split()]
    print(calculate(a,b))
