#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;
 
void DBG(){	cerr<<")\n";}
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<typename T>
ostream & operator <<(ostream &os, const pair < T, T>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
void press(int n = 15){	cout<<setprecision(n)<<fixed;}
void setIO( string name = "")
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	if(sz(name))
	{
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}
 
typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 
 
///aqui puede ir algo 

long long int absoluto(long long int k)
{
	// definicion de numero absoluto:
		// la distancia desde i hasta 0
		// la distancia de -5 hasta 0 es 5
	if( k < 0 )
		return -k;
	return k;
} 

int main()
{
 	setIO();
 	int n;
 	cin>>n;
 	priority_queue < long long int  > aj;
 	queue < long long int > pg;
 	while(n--)
 	{
 		char op;
 		long long int x;
 		cin>>op;
 		if( op == 'Q')
 		{
 			// procastinar (TODO)
 			// dos casos:
 				/// cuando las listas (colas) estan vacias
 				/// cuando podemos dar respuesta

 			if( aj.empty() )
 				cout<<"MARIOLA NO!\n";
 			else
 			{
 				long long int primer_elemento = pg.front();
 				long long int elemento_maximo = aj.top();
 				cout<<absoluto(primer_elemento - elemento_maximo)<<'\n';
 				aj.pop(), pg.pop();
 			}
 		}
 		else
 		{
 			// leer x y meterlo en la cola y cola de prioridad 
 			cin>>x;
 			pg.push(x);
 			aj.push(x);
 			
 		}
 	}
 
	cout<<"\n";
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benq
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE
 
*/
