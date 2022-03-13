#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
#define press(x)  setprecision(x)<<fixed
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;
constexpr int dx4[] = {-1,0,1,0};
constexpr int dy4[] = {0,-1,0,1};
constexpr int dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr int dy8[] = {-1,0,1,1,1,0,-1,-1};

void DBG()
{
	cerr<<"]\n";
	return;
}
template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t)) cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)

int triangle[1002][1002];
ll dp[1002][1002];
int n;

ll ans( int x, int y )
{
	dbg(x,y,dp[x][y], triangle[x][y]);
	if( y > x || y < 1  ) 
		return -inf;
	if( x == n  )
		return dp[x][y] = (ll) triangle[x][y];
	if( dp[x][y])
		return dp[x][y];
	return dp[x][y] = triangle[x][y] + max( ans(x+1,y), ans(x+1,y+1));
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	cin>>n;
	for(int c = 1 ; c<=n; c++)
		for(int d = 1 ; d<=c; d++)
			cin>>triangle[c][d];

	cout<<ans(1,1);
	cout<<"\n";
	for(int c = 1 ; c<=n; c++)
	{
		for(int d = 1 ; d<=n; d++)
			cout<<dp[c][d]<<" ";
		cout<<"\n";
	}

}

