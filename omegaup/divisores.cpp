#include<stdio.h>

///aqui puede ir algo 


int main()
{
	typedef unsigned long long int ul;
	ul n,ans;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	scanf("%llu",&n);
	for(ul c = 1; c*c<=n; c++)
	{
		//dbg(ans, n,c);
		if(n % c == 0 )
		{
			if( n / c == c)
				ans++;
			else ans+=2;
		}

	}
		
	if(ans % 2 )
		printf("IMPAR");
	else printf("PAR");
	///uwu - vrm - Vanessa Rodriguez Medina <3
}
/* 

	[°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benq
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE

*/

