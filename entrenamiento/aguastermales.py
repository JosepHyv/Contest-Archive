'''
vestia por que restringen solo a un lenguaje
 ya lo habia hecho directamente en c++
una recomendacion, si van a restringir a un lenguaje 
ponganlo en la descripcion. 
tambien, en el problema, le hacen falta los limites siempre
hay que ponerlos sin importar el lenguaje'''

#===================
mp = []
n = 0
m = 0 
ans = 0 
#===================

def pinta(x,y):
	#print(x,y)
	global n,m
	if x < 1 or x > n or y < 1 or y > m  or mp[x][y] != 'A':
		return
	global ans
	mp[x][y] = 'T'
	ans += 1 
	vx = [-1,-1,-1,0,1,1,1,0]
	vy = [-1,0,1,1,1,0,-1,-1]
	for c in range(8):
		#print("vx = {} , vy = {} ".format(vx[c], vy[c]))
		pinta(x+vx[c], y + vy[c])

def main():
	global n,m, mp, anss
	n,m = map(int,input().split())
	mp.append(['T'])
	for c in range(n):
		coso = input()
		arr = []
		coso = 'T'+coso
		arr[:0] = coso
		mp.append(arr)
	

	x,y = map(int, input().split())
#	x -= 1
#	y -= 1
	pinta(x,y)
	print("El lago mide {} celdas".format(ans))

if __name__ == "__main__":
	main()