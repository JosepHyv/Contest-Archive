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
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

char mm[1002][1002] = {0};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int fila[n+2] = {0};
	int col[m+2] = {0};
	for(int c = 1; c<=n; c++)
		for(int d = 1; d<=m; d++)
		{
			cin>>mm[c][d];
			if( mm[c][d] == '*')
			{
				fila[c]++;
				col[d]++;
			}
		}

	ll ans = 0;
	for(int c = 1; c<=n; c++)
		for(int d = 1; d<=m; d++)
		{
		//	cin>>mm[c][d];
			if( mm[c][d] == '*')
				ans += ( fila[c]-1) * (col[d] -1);
		}

	cout<<ans;


}
