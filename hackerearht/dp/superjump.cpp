#include<bits/stdc++.h>
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
constexpr int mod = 1e9 + 7;



///aqui puede ir algo 

bool vis[1002][1002];
bool mm[1002][1002];
ul dp[1002][1002];
int n,m;

int solve(int x , int y, int salto  )
{

	if( x >= n || y >= m || vis[x][y] || mm[x][y]) return 0;
//	dbg(x,y);
	if(dp[x][y]) return dp[x][y];
	if(x == n-1 && y == m-1)
	{
//		dbg(x,y);
		return 1;
	} 

//vis[x][y] = true;
	int r = solve(x,y+salto, salto) % mod;
	int d = solve(x+salto, y, salto) % mod;
	//vis[x][y] = false;
	return dp[x][y] += ( ( r % mod) + ( d % mod )) % mod ;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	cin>>n>>m;
	for(int c = 0 ; c<n; c++)
	{
		for(int d = 0 ; d<m; d++)
			cin>>mm[c][d];
	}
	for(int c = 1; c<=(max(n,m)); c++)
		solve(0,0,c);
	/*for(int c = 0 ; c<n; c++)
	{
		for(int d = 0 ; d<m; d++)
			cerr<<dp[c][d]<<" ";
		cerr<<"\n";
	}*/

	cout<<dp[0][0] % mod;

	

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

