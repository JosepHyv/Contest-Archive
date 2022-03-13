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
	cerr.tie(NULL);
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n,t;
	cin>>n>>t;
	vector < int > vx(n+1);
	for(int c = 1; c<=n; c++)
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}

	int ans = 0 ;
	for(int c = 1; c<=n; c++)
	{
		int i = 1, f = n;
		int mm = 0 ;
		// para cada uno, puedo buscar el maximo derecho 
		// el cual cumple que sea <= t
		// o(n log n )
		while( i <= f )
		{
		//	dbg(c,i,f,mm);
			mm = ( i + f) / 2;
			if( vx[mm] - vx[c-1] <= t)
			{
				ans = max(ans, (mm - c )+ 1);
				i = mm +1;
			}
			else f = mm -1;
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

