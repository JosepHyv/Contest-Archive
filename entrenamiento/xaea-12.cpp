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

int t,n,m;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		int vx[n+2] = {0};
		int frc[MAXN] = {0};
		int ans[n+2] = {-1};
		for(int c = 1; c<=n; c++)
		{
			cin>>vx[c];
			frc[vx[c]]++;
			ans[c] = -1;
		}

		stack < pii > solv;
		for(int c = 1; c<=n; c++)
		{
			while( !solv.empty() && frc[solv.top().first] < frc[vx[c]])
			{
				ans[solv.top().second] = vx[c];
				solv.pop(); 
			}
			solv.push({vx[c],c});
		}

		for(int c = 1; c<=n; c++)
			cout<<ans[c]<<" ";
		cout<<"\n";
	}
}