#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
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

ll mm[100][100];
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
 	int n,m;
 	cin>>n>>m;
 	for(int c = 1; c<=n; c++)
 		for(int d = 1; d<=m; d++)
 			cin>>mm[c][d];
 	bool ok = true;
 	for(int i1 = 1; i1<=n; i1++)
 		for(int i2 = i1+1; i2<=n; i2++)
 			for(int j1 = 1; j1<=m; j1++)
 				for(int j2 = j1+1; j2<=m; j2++)
 				{
 					ll f = mm[i1][j1] + mm[i2][j2];
 					ll s = mm[i2][j1] + mm[i1][j2];
 					//dbg(i1,i2,j1,j2 , (f <= s));
 					ok = min(ok, (f <= s));
 				}

 	cout<<(ok?"Yes": "No");
 
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
