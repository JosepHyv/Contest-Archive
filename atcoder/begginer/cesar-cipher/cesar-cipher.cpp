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
template<class T1, class T2>
ostream & operator <<(ostream &os, const pair < T1, T2>&sol ){
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
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
 	string a,b;
 	cin>>a>>b;
 	int distancia  = 0 ;
 	if( a[0] <= b[0])
 		distancia = b[0] - a[0] ;
 	else distancia = ('z' - a[0] )+ (b[0] - 'a') +1 ;
 	//cout<<distancia; 

  	bool ok = true;
  	for(int c = 0 ; c<sz(a); c++)
  	{
  		int pos = a[c];
  		pos += distancia;
  		if( pos > 'z')
  			pos = pos - 'z' + 96;
  		dbg(distancia, (char)pos, pos);

  		if(b[c] != pos)
  		{
  			ok = false;
  			break;
  		}
  	}
  	
  	cout<<(ok? "Yes": "No");
 
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
