//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < ll > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < ll , ll > pii;
typedef vector< vector< ll >> adj;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll vx[n+2] = {0};
	for(ll c = 1; c<=n; c++)
		cin>>vx[c];
	ll m;
	cin>>m;
	while(m--)
	{
		ll x, y;
		cin>>x>>y;
		ll left = 0, right = 0 ;
		if( y > vx[x])
		{
			right = 0 ;
			left = vx[x];
		}
		else
		{
			left = y-1;
			right = vx[x]-y;
		}
		vx[x] = 0;
		if( x > 1)
			vx[x-1] += left;
		if( x < n)
			vx[x+1] += right;
	}

	for(ll c = 1; c<=n; c++)
		cout<<vx[c]<<"\n";
	
}