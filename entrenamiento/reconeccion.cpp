#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef unsigned long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
typedef unsigned long long int ull;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

ll n,m,s;
bool airport[MAXN];
pair < int, pair< int, int > > orig[MAXN], grf[MAXN];
int disjoint[MAXN];

void init(int n)
{
	for(int c = 0 ; c<=n; c++ ) 
		disjoint[c] = c;
	return;
}

int finds( int a)
{
	if( disjoint[a] != a)
		return disjoint[a] = finds(disjoint[a]);
	return a;
}

void unions(int a, int b)
{
	int x = finds(a), y = finds(b);
	disjoint[y] = x;
}

bool conected(int a, int b)
{
	return (finds(a) == finds(b));
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m>>s;
	init(n);
	for(int c = 0 ; c<m; c++)
		cin>>grf[c].se.fi>>grf[c].se.se>>grf[c].fi;

	sort(grf,grf+m);
	ll ans = (ll) ( n * s);
	ll comps = n;
	ll camino = 0;

	for(int c = 0;  c<m; c++)
	{
	
		if( conected(grf[c].se.fi, grf[c].se.se) )
			continue;
		unions(grf[c].se.fi,grf[c].se.se);
		comps--;
		camino += grf[c].fi;
		ans = min( ans, (camino + (comps*s)));

	}
	if(comps == 1 )
		ans = min( ans, camino);

	cout<<ans;

	
}