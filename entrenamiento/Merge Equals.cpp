//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb(x) push_back(x)
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
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;
typedef unsigned long long int ull;

int n;
vector < pair < int, ull > > ans;
void solve( ull arr[] )
{
	stack < pair < int, ull > > orig,mast;
	for(int c = 0; c<n; c++)
	{
		ull aux = arr[c];
		while( !orig.empty() )
		{
			if( orig.top().second == aux ) 
			{
				aux += orig.top().second;
				orig.pop();
			}
			else
			{
				mast.push(orig.top());
				orig.pop();

			}

		}
		while(!mast.empty())
		{
			orig.push(mast.top());
			mast.pop();
		}
		orig.push({c,aux});
	} 
	while(!orig.empty())
	{
		ans.pb(orig.top());
		orig.pop();
	}
	sort(all(ans));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	ull vx[n+2];
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];

	solve( vx );

	cout<<ans.size()<<"\n";
	for(auto v:ans)
		cout<<v.second<<" ";
	
}