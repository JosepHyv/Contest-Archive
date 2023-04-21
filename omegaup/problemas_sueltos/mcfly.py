import math 

def log2(number):
    ans = math.log(number) / math.log(2)
    return int(ans)



n = int(input())
print(log2(n))