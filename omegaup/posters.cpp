#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
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
template <typename T>
ostream & operator <<(ostream &os, const pair < T, T>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}
template<typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
void press(int n = 15){	cout<<setprecision(n)<<fixed;}
void setIO( string name = "")
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	if(sz(name))
	{
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}
 
typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e9+2;
constexpr int inf = 2e9;
 
 
///aqui puede ir algo 

bool solapan(pair < ll, ll > poste1, pair < ll, ll > poste2)
{
	//if(poste1 > poste2) swap(poste1, poste2);
	return poste2.fi >= poste1.fi && poste2.se  <= poste1.se; 
}
 
int main()
{
 	setIO();
 	ll n, k ;
 	cin>>n;
 	k = n;
 	map < ll, ll > barr;
 	map <ll , pair < ll, ll >> cubeta;
 	set < ll > diferentes;
 	vector < pair < ll, ll > > input(n);
 	while(n--)
 	{
 		int x,y;
 		cin>>x>>y;
 		input[k - n - 1 ] = {x,y};
 		barr[x] = barr[y] = k - n;
 	}
 	vector < ll > posters;
 	ll pos = 0;
 	for(auto [x,y] : barr)
 	{
 		if(cubeta.find(y) == cubeta.end())
 		{
 			cubeta[y].fi =  pos;
 			cubeta[y].se = -MAXN;
 		}
 		else
 		{
 			cubeta[y].se = pos;
 		}
 		posters.pb(y);
 		pos++;
 	}
 	///posters antes del barrido 
 	//dbg(posters);
 	for(ll c = 0; c < sz(posters); c++)
 	{
 		if(cubeta[posters[c]].se != -MAXN ) //  && c <= cubeta[posters[c]].fi)
 		{
 			auto curr = cubeta[posters[c]];
 			ll pintura = posters[c];
 			for(ll d = c; d < sz(posters) && d<=curr.se; d++)
 				if(pintura >= posters[d])
 					posters[d] = pintura;
 		}
 	}

 	//posters despues del barrido 
 	dbg(posters);
 	// apilando construcción y construyendo conjunto
 	vector < pair < ll, ll > > mezcla;
 	for(ll a: posters)
 	{
 		if(diferentes.find(a) == diferentes.end())
		{
			diferentes.insert(a);
			auto rango_actual = input[a - 1];
			if(sz(mezcla) && solapan(mezcla.back(), rango_actual))
			{
				auto ultimo = mezcla.back();
				ultimo.se = max(ultimo.se, rango_actual.se);
				mezcla[sz(mezcla) - 1] = ultimo;
			}
			else mezcla.pb(rango_actual);
		}
 	}
 	
 	set < ll > inexistentes;
 	for(int c = 1; c<=k; c++)
 		if(diferentes.find(c) == diferentes.end())
 				inexistentes.insert(c);
 	
 	// imprimiendo mezcla
 	dbg(mezcla);
 	for(ll a: inexistentes)
 	{
 		pair< ll, ll >  rango_actual = input[a - 1];
 		for(int c = 0 ; c<sz(mezcla)-1; c++)
 		{
 			pair < ll, ll > rango_intermedio = {mezcla[c].second +1 , mezcla[c+1].fi -1}; 
 			if(rango_intermedio.fi >= rango_actual.fi && rango_intermedio.se <= rango_actual.se)
 				diferentes.insert(a);
 		}
 	}
 	cout<<sz(diferentes);
	cout<<"\n";

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
