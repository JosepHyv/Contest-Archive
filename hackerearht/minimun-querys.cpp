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
	int n,q;
	cin>>n>>q;
	vector < ll > vx(n), suma(n), ans(n,-1);
	for(int c = 0 ; c<n; c++)
	{
		cin>>vx[c];
		ll aux = vx[c];
		while( aux )
		{
			suma[c] += (aux % 10 );
			aux /= 10 ;
		}
	}

	//dbgv(suma);
	//dbgv(ans);

	stack < int > trick;
	for(int c = 0 ; c<n; c++)
	{
		while( sz(trick) && suma[trick.top() ] > suma[c] && vx[trick.top()] < vx[c])
		{
			//dbg(trick.top(), vx[trick.top()], suma[trick.top()], vx[c], suma[c]); 
			ans[trick.top()] = c+1;
			trick.pop();
			//dbgv(ans);
		}
		trick.push(c);
	}
	 
	dbg(sz(trick));
	while( sz(trick))
	{
		cout<<suma[trick.top()]<<" "<<vx[trick.top()]<<"\n";;
		trick.pop();
	}
	/*while( q--)
	{
		int x;
		cin>>x;
		cout<<ans[x-1]<<"\n";
	}*/

	cout<<"\n";
	///uwu - vrm 
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

