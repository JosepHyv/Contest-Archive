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
template<typename T>
ostream & operator <<(ostream &os, const pair < T, T>&sol ){
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
	freopen("in", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll ans = 0 ;
	vector < int > vx;
	int x;

	while(cin>>x)vx.pb(x);

	sort(all(vx));
	for(int c = 0 ; c<200; c++)
		for(int d = c; d<=200; d++)
		{
			/*if(vx[c] + vx[d]  > 2020) break;
			if( vx[c] + vx[d] == 2020)
			{
				ans = max( ans, ll (vx[c]) * ll (vx[d]) );
			}*/
			for(int h = c; h<=200; h++ )
			{
				if(vx[c] + vx[d] + vx[h] > 2020) break;
				if( vx[c] + vx[d] + vx[h] == 2020)
				{
					ans = max( ans, ll (vx[c]) * ll (vx[d]) * ll(vx[h]));
				}
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

