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
	while( t--)
	{
		int n, l,r ;
		cin>>n>>l>>r;
		if( l > r ) swap(l,r);
		vector < ll > vx(n);
		for(int c = 0 ; c<n; c++)
			cin>>vx[c];
		sort(all(vx));
		ll ans = 0 ;
		for(int c = 0; c<n; c++ )
		{
			/// d  <= r - c  puedo calcular cuantos menores hay tales que la diferencia me permita entrar
			int sumar = lower_bound( all(vx), r - vx[c] +1 ) - vx.begin();
			int sumal = lower_bound( all(vx), l - vx[c]) - vx.begin();
			/// la misma para las l - 1 uwu  

			//dbg(sumar, sumal, ans); si sepudo uwu 
			sumar = min( sumar, c);
			sumal = min( sumal, c);
			ans += abs( sumar- sumal); 
			
			/// puede ser ? 
		}

		

		cout<<ans<<"\n";
	}
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

