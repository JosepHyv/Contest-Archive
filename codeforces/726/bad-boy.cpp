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

int distance(int x,int y, int x1, int y1)
{
	return abs(x-x1) + abs(y-y1);
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
		int n,m,i,j;
		cin>>n>>m>>i>>j;
		if( n == m && m == 1 )
		{
			cout<<"1 1 1 1\n";
			continue;
		}

		/// (1,1) (1,m), (n,1), (n,m)
		int d1 = 0,d2 = 0 ;
		d1 += distance(1,1,i,j) + distance(n,m,i,j);
		d2 += distance(1,m, i,j) + distance(n,1,i,j);
		if( d1 > d2 )
			cout<<1<<" "<<1<<" "<<n<<" "<<m;
		else cout<<1<<" "<<m<<" "<<n<<" "<<1;
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

