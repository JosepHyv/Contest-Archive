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
constexpr int mod = 1e9+7;


///aqui puede ir algo 

int chapter1(string s) // for chapter 1 
{
		vector < int > vx(sz(s)+1);
		char last = 0;
		int pos = 0 ;
	//	s = 'F' + s;
		for(int c = 0; c<sz(s); c++)
			if( s[c] != 'F')
			{
				last = s[c];
				vx[c+1] = 1;
				pos = c;
				break;
			}
		int ans = 0;
		for(int c = pos; c<sz(s); c++)
		{
			int acarreo = vx[c];
			if(s[c] != 'F')
			{
				if(s[c] != last)
				{
					acarreo++;
					last = s[c];
				}
			}	
			vx[c+1] += acarreo;
			ans = max(ans, vx[c+1]);
		}

		return (ans == 0 ? 0: ans-1);
}

int chapter2(string s)
{
	ll ans = 0, pasos = 0 ;
	ll numberO = 0 , numberX = 0 ;
	ll sinContar = 0 ;
	for(char a: s)
	{
		if( a == 'O')
		{
			numberO += sinContar + numberX + 1;
			pasos += numberX;
			numberX = sinContar = 0 ;
		}
		else if( a == 'X')
		{
			numberX += sinContar + numberO + 1;
			pasos += numberO;
			numberO = sinContar = 0 ;
		}
		else sinContar++;
		ans = ( ( ans % mod) + ( pasos % mod )) % mod;
	//	dbg(s,ans);
	}
	return ( ans % mod );
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
	int cases  = 1;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		ll ans = chapter2(s);
	//	raya;

		cout<<"Case #"<<cases++<<": ";
		cout<<ans;
		cout<<"\n";
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

