#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
struct estado
{
	int numero, operaciones;
};
bool visitados[100000]; /// 9999 es el ultimo 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,n;
	cin>>a>>b>>n;
	queue < estado > cola;
/* siempre hay que meter un primer estado -> */	
	cola.push( {1,0} ); 
	visitados[0] = visitados[1] = true;
	/*
		lo de arriba equivale a 
		estado temporal;
		temporal.numero = 1;
		temporal.operaciones = 0 ;
		cola.push(temporal);
	*/
	while( !cola.empty() )
	{
		estado raiz = cola.front();
		cola.pop();

		// valido si ya llegue 
		if( raiz.numero == n )
		{
			cout<<raiz.operaciones<<"\n";
			return 0;
		}

		estado multiplicacion, division;
		multiplicacion = division = raiz;

		/* toca hacer la multiplicacion*/
		multiplicacion.numero *= a;
		multiplicacion.operaciones++;
		if( multiplicacion.numero > 9999)
			multiplicacion.numero = 1;
		if( !visitados[multiplicacion.numero])
		{
			visitados[multiplicacion.numero] = true;
			cola.push(multiplicacion);
		}

		/* toca hacer la division */ 
		division.numero /= b;
		division.operaciones ++;
		if( !visitados[division.numero])
		{
			visitados[division.numero] = true;
			cola.push(division);
		}
		
	}


	//cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

