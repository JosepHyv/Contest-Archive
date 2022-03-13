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
	int cases = 1;
	while(t--)
	{
		string s;
		cin>>s;
		vector < int > vocals(256), consonant(256);
		for( char x: s)
		{
			bool ok = false;
			for( char y : "AEIOU")
			{
				if( x == y )
				{
					ok = true;
					vocals[x]++;
					break;
				}
			}

			if(!ok)
				consonant[x]++;
		}

		int cont1 = 0 , cont2 = 0 ;
		int maxi1 = 0 , maxi2 = 0 ;
		for(int x: vocals)
		{
			cont1 += x;
			maxi1  = max( maxi1, x);
		}

		for(int x: consonant)
		{
			cont2 += x;
			maxi2  = max( maxi2, x);
		}

		int ans1 = 0, ans2 = 0 ;
		ans1 = (cont2 + ( 2 * cont1)) - ( 2 * maxi1);
		ans2 = (cont1 + ( 2 * cont2)) - ( 2 * maxi2);
		cout<<"Case #"<<cases<<": "<<min(ans2,ans1)<<"\n";
		cases++;

	}
	

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

