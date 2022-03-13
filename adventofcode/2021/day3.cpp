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

string findOxigen(vector < string> data)
{
	vector < string > aux;
	while(sz(data) > 1 )
	{

		for(int c = 0 ; c<sz(data[0]); c++)
		{

			aux.clear();
			int uno = 0 , cero = 0 ; 
			for(int d = 0 ; d<sz(data); d++)
			{
				if(data[d][c] == '1') uno++;
				else cero++;
			}
			if(uno >= cero)
			{
				for(int d = 0 ; d<sz(data); d++)
					if(data[d][c] == '1')
						aux.pb(data[d]);
			}
			else if(uno < cero)
			{
				for(int d = 0 ; d<sz(data); d++)
					if(data[d][c] == '0')
						aux.pb(data[d]);		
			}
			data = aux;
		}
	}
	return data[0];
}

string findCeo(vector < string> data)
{
	vector < string > aux;
	while(sz(data) > 1 )
	{

		for(int c = 0 ; c<sz(data[0]); c++)
		{
			//dbg(data);	
			aux.clear();
			int uno = 0 , cero = 0 ; 
			for(int d = 0 ; d<sz(data); d++)
			{
				if(data[d][c] == '1') uno++;
				else cero++;
			}
			if(cero <= uno)
			{
				for(int d = 0 ; d<sz(data); d++)
					if(data[d][c] == '0')
						aux.pb(data[d]);
			}
			else 
			{
				for(int d = 0 ; d<sz(data); d++)
					if(data[d][c] == '1')
						aux.pb(data[d]);		
			}
			data = aux;
		}
	}
	return data[0];
}


ll toInt(string a)
{
	ll ans = 0 ;
	ll pot = 1;
	for(int c = sz(a)-1; c>=0; c--)
	{
		if(a[c] == '1')
			ans += pot;
		pot *= 2;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	freopen("in3", "r", stdin);
	//freopen("output.txt", "w", stdout);*/
	
	vector < string > vx;
	string x;
	while(cin>>x)vx.pb(x);

	string gamma = "";
	string epsilon = "";
	dbg(findOxigen(vx),findCeo(vx));
	cout<<toInt(findOxigen(vx))*toInt(findCeo(vx));

	
	

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

