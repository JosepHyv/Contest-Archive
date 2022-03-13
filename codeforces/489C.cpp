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

bool ok( int a, int b )
{
	return (b >= 0 && b <= a*9 );
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n,m;
	cin>>n>>m;
	int aux = m;
	string ans1 ="", ans2 = "";
	if( n == 0 && m == 0)
	{
		cout<<"0 0";
		return 0;
	}
	if(n == 1)
	{
		if( 0 <= m && m <= 9 ) 
		{
			cout<< m <<" " <<m;
			return 0;
		}
		else
		{
			cout<<"-1 -1";
			return 0;
		}
	}

	if( m < 1 || n * 9 < m )
	{
		cout<<"-1 -1";
		return 0;
	}

	for(int c = 0; c<n; c++)
	{
		for(int d = 0; d<=9; d++)
			if( ((c > 0 || d > 0 ) || ( n == 1 && d == 0)) && ok(n - c - 1, aux - d))
			{

				aux -= d;
				ans1 += char(d + 48);
				//dbg(ans1, aux, d);
				break;
			}

	}
	aux = m;
	for(int c = 0; c<n; c++)
	{
		for(int d = 9; d>=0; d--)
			if( ((c > 0 || d > 0 ) || ( n == 1 && d == 0)) && ok(n - c-1, aux - d))
			{

				aux -= d;
				ans2 += char(d + 48);
				//dbg(ans2, aux, d);
				break;
			}

	}
	dbg(ans1, ans2);

	cout<<ans1<<" "<<ans2;


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

