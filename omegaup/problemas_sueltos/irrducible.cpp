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
int iz[11];

void antonio(string &a, string &b)
{
	mset(iz,0);
	for(char x: a)
	{
		if(b.find(x) != string::npos)
		{
			b.erase(b.find(x),1);
			iz[x - 48]++;
		}
	}

	string aux = "";
	for(char x: a)
	{
		if(!iz[x-48]) aux +=x;
		else iz[x-48]--;
	}

	a = aux;

	//dbg(a,b);
}

void ans(int &a, int &b)
{
	int div = __gcd(a,b);
	while( div > 1 )
	{
		a /= div;
		b /= div;
		div = __gcd(a,b);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		string anx = to_string(x),any = to_string(y);
		antonio(anx,any);
		ans(x,y);

		int xx = atoi(anx.c_str()), yy = atoi(any.c_str());
		cout<<x<<"/"<<y<<" ";
		cout<<(x == xx && y == yy ? "SI": "NO")<<"\n";

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

