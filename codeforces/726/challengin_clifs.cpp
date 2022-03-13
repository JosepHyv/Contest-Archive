#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;

void DBG(){	cerr<<")\n";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 

void print(int x , int y )
{
	while( y-- > 0 )
		cout<<x<<" ";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector < int > vx(n);
		for(int c  = 0 ; c<n; c++)
			cin>>vx[c];

		sort(all(vx));
		/// ordenar, si hay iguales 
		/// imprimos los iguales a los extremos 
		/// imprimo el más grande al extremo izquierdo  
		/// y el más pequeño al extremo derecho
		/// en medio, se quedaran de menor a mayor 

		/// buscar la diferencia minima en greedy 
		/// lo mejor es tomar de maximo a minimo 
		// caso 
		// 2 4 6 7 8 
		// sol optima
		/// 7 2 4 6 8  abs = 1 dificultad = 3 
		/// 8 2 4 6 7  abs = 1 dificultad = 3
		/// conviene encontrar la diferencia minima 
		/// comenzar desde j ( más grande ) hasta n 
		/// decrementar 1 vez e ir de 0 a i
		/// sol
		/// abs( j - i) siempre sera la minima
		/// dificultad ira en incremento, sera el maximo
		int minix = inf;
		int i = 0 , j = 0 ;
		for(int c = n-1 ; c>0; c--)
			if( (vx[c] - vx[c-1]  ) <  minix  )
			{
				i = c-1;
				j = c;
				minix = vx[j] - vx[i];
			}
		cout<<vx[i]<<" ";
		for(int c = j+1; c<n; c++)
			cout<<vx[c]<<" ";
		for(int c = 0; c<i; c++ )
			cout<<vx[c]<<" ";
		cout<<vx[j];

	
		cout<<"\n";
	}

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benqi
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE

*/

