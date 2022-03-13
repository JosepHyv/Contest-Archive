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
constexpr ll maximo = 1e11;

///aqui puede ir algo 
vector < ll > lucky;
void init( ll x )
{
	if( x > maximo)
		return;
	lucky.pb(x);
	init(10 * x + 4);
	init(10 * x + 7);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	init(0);
	sort(all(lucky));
	//dbg(maximo, lucky[0]);
	ll l,r;
	cin>>l>>r;
	ll ans = 0;
	for(ll a: lucky)
	{
		if( a > 0  && a >= l )
		{
			//dbg("antes", ans, a, l, r);
			ans += a * ( min(a,r) - l + 1);
			l = a + 1;
			if( l > r ) break;
			//dbg("Desues", ans, a, l, r);
			/*
			 la respesta sale calculando
			 cuantos numeros son menores a mi lucky actual
			 multiplicado por el lucky actual obtenemos la suma
			 de los primeros [l - lucky] numeros
			 y tomamos el lucky y lo llevamos a ser nuestro nuevo
			 rango izquierdo, hasta acabar */  
		}
	}
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- me falto un >= ahhhg y ahora me sobro uno 
   la respesta sale calculando
	cuantos numeros son menores a mi lucky actual
	multiplicado por el lucky actual obtenemos la suma
	de los primeros [l - lucky] numeros
	y tomamos el lucky y lo llevamos a ser nuestro nuevo
	rango izquierdo, hasta acabar.
			 
			 eso de be de ser uwu
*/


