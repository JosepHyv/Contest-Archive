//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
#define sz(x) (int) x.size()
#define space(x) getline(cin,x)
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
#define adj(x) vector<  vector < x > >  
#define clr(x) memset( x, 0, sizeof(x))
#define press(x) setprecision(x)<<fixed
#define deb(x) cerr<< #x<< "is "<< x<<"\n"
using namespace std;

typedef long double ld;
typedef set < int > si;
typedef vector< int > vi;
typedef long long int ll;
typedef set < string > ss;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef unsigned long long int ull;

void DBG()
{
	cerr<<"]\n";
	return;
}

template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t))
		cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)

template < typename... T> 
void read(T&... args)
{
	((cin >> args), ...);
}

template < typename... T > 
void print(T... args)
{
	((cout << args <<" "), ...);
}

constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr int inf = 2e9;
constexpr short dx4[] = {-1,0,1,0};
constexpr short dy4[] = {0,1,0,-1};
constexpr short dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr short dy8[] = {-1,0,1,1,1,0,-1,-1};

struct nn
{
	ll x,peso;
	bool operator < ( const nn & a) const
	{
		return a.peso < peso;
	}
};

priority_queue< nn > cl;
ll n,m, p;
adj(nn) grf;

void reco( vi & vx, ll & cost)
{
	 ll nodo = vx[0];
	for(int c = 1 ; c<sz(vx); c++)
	{
		for( auto v: grf[nodo])
			if( v.x == vx[c])
			{
				nodo = vx[c];
				cost += v.peso;
				break; 
			}
	}

	return;
}

bool vne[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	read(n,m,p);
	grf.resize(n+2);
	while( m--)
	{
		int x,y,k;
		read(x,y,k);
		grf[x].pb({y,k});
		grf[y].pb({x,k});
	}

	int aux;
	cin>>aux;
	vi secu(aux);
	ll costo = 0 ;
	for(int c = 0 ; c<aux; c++)
		cin>>secu[c];
	reco( secu, costo);

	cl.push({1,0});
	vne[1] = true;
	while( sz(cl))
	{
		nn r = cl.top();
		cl.pop();
		//dbg(r.x, r.peso, costo);
		vne[r.x] = true;
		if( r.x == p)
		{
			cout<<( r.peso == costo ? "Ok": ">:(");
			return 0;
		}

		for(auto v: grf[r.x])
		{
			if( !vne[v.x])
				cl.push({v.x, r.peso + v.peso});
		}
		
	}
}
