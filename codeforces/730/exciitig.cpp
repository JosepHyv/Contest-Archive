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
		ul a,b;
		cin>>a>>b;
		if( a == b )
			cout<<"0 0";
		else
		{
			ul maximo = max(a,b) - min(a,b);
 
			/// la diferencia es el max gcd 
			/// buscar que ambos sean multiplos de la diff 
			/// respuesta minima 
			if( a % maximo == 0 && b % maximo == 0 )
				cout<<maximo<<" "<<0;
			else
			{
				ul aux = min(a,b);
				a = max( a,b);
				b = aux;
 
				ul divi = b / maximo;
				ul atras = divi * maximo;
				ul enfrente = atras + maximo;
				if( atras == 0 )
					cout<<maximo<<" "<<enfrente - b;
				else
				{
					if( (b - atras ) < ( enfrente - b))
						cout<<maximo<<" "<<b - atras;
					else
						cout<<maximo<<" "<<enfrente - b;
				}
 
 
 
 
			}
 
		}
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
 
