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
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<class T1, class T2>
ostream & operator <<(ostream &os, const pair < T1, T2>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}
 
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
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
 	int n,m;
 	cin>>n>>m;

 	vector < int > estacionamiento(n, -1);
 	queue < int > espera;
 	vector < int > costo(n);
 	vector < int > peso(m);
 	int libres = n;
 	ll ans = 0;
 	for(int &a: costo)
 		cin>>a;
 	for(int &a: peso)
 		cin>>a;
 //	dbg(estacionamiento, costo, peso);
 	m *= 2;
 	while(m--)
 	{
 		int x;
 		cin>>x;
 		if(x < 0 )
 		{
 			int pos = 0;
 			for(int c = 0 ; c<n; c++)
 				if(estacionamiento[c] == (-x) )
 				{
 					estacionamiento[c] = -1;
 					pos = c;
 					break;
 				}
 				libres++;


 			if(espera.size())
 			{
 			//	dbg(-x, cola.front());
 				int data = espera.front();
 				espera.pop();
 				estacionamiento[pos] = data;
 				ans += costo[pos] * peso[data-1];
 			}


 		}
 		else
 		{
 			int pos = -1 ;
 			for(int c = 0 ; c<n; c++)
 				if(estacionamiento[c] == -1)
 				{
 					estacionamiento[c] = x;
 					pos = c;
 					break;
 				}

 		//	dbg(x, pos, peso[x-1] * costo[pos]);
 			if(pos != -1)
 				ans += (peso[x-1] * costo[pos]);
 			else espera.push(x);

 		}
 	}
 	cout<<ans;

 
	cout<<"\n";
	///uwu - vrm - Vanessa Rodriguez Medina <3
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
