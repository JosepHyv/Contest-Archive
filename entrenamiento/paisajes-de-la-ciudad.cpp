#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
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

int n;
int vx[MAXN];
int ans[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	stack < pii > pl;
	for(int c = 1; c<=n; c++)
	{
		cin>>vx[c];
		while( !pl.empty() && pl.top().first < vx[c])
		{
			ans[pl.top().se] += (c - pl.top().se);
			pl.pop();
		}
		pl.push({vx[c],c});
	}
	while(!pl.empty())
	{
		ans[pl.top().se] += ((n+1) - pl.top().se);
		pl.pop();
	}

	for(int c = n; c>=1; c--)
	{
		while(!pl.empty() && pl.top().fi < vx[c])
		{
			ans[pl.top().se] += ( pl.top().se - c)-1;
			pl.pop();
		}
		pl.push({vx[c],c});
	}

	while( !pl.empty())
	{
		ans[pl.top().se] += pl.top().se-1;
		pl.pop();
	}

	for(int c = 1 ; c<=n; c++)
		cout<<ans[c]<<" ";
	
}