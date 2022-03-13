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
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
typedef unsigned long long int ull;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 5*1e2+3;
constexpr ll inf = 1ll << 32;

void cuenta ( ll mat[MAXN][MAXN], ll ans[], int i, int j)
{
	ll ante = 0 ;
	ans[i] = 0;
	for(int c = 1; c<=j; c++)
		if(!mat[i][c] )
		{
			ans[i] = max(ante,ans[i]);
			ante = 0 ;
		}
		else
			ante++;
	ans[i] = max( ans[i], ante);
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,q;
	cin>>n>>m>>q;
	ll mm[MAXN][MAXN] = {{0}};
	ll ans[n+2] = {0};
	for(int c = 1; c<=n; c++)
		for(int d = 1; d<=m; d++)
			cin>>mm[c][d];

	for(int c = 1; c<=n; c++)
		cuenta(mm,ans,c,m);

/*	for(int c = 1; c<=n; c++)
		cout<<ans[c]<<" ";*/
	cout<<"\n";
	while( q--)
	{
		int x,y;
		cin>>x>>y;
		mm[x][y] = !mm[x][y];
		cuenta(mm,ans,x,m);
		ll maxi = 0 ;
		for(int c = 1; c<=n; c++)
			maxi = max( maxi, ans[c]);
		cout<<maxi<<"\n";
	}
}