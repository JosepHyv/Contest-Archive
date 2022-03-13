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
bool mapa[1002][1002];

 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n,m;
	cin>>n>>m;
	int k;
	cin>>k;
	while(k--)
	{
		int x,y;
		cin>>x>>y;
		mapa[x-1][y-1] = true;
	} 	

	int ans = 0;
	for(int c = 0 ; c<n-1; c++)
		for(int d = 0 ; d<m-1; d++)
		{
			int sal = mapa[c][d] + mapa[c+1][d] + mapa[c][d+1] + mapa[c+1][d+1];
			if(!sal)
				ans++;
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
