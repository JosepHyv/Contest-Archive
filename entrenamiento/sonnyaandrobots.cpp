//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define sz(x) (int) x.size()
#define space(x) getline(cin,x)
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
#define adj(x) vector<  vector < x > >  
#define press(x) setprecision(x)<<fixed
#define deb(x) cerr << #x << " is "<<x<<"\n"
using namespace std;

typedef long double ld;
typedef set < int > si;
typedef vector< int > vi;
typedef long long int ll;
typedef set < string > ss;
typedef pair < ll, ll > pll;
typedef map < ll , ll > mll;
typedef map < int, int > mii;
typedef map < int, string> mis;
typedef pair < int , int > pii;
typedef map < string, int > msi;
typedef set < long long int > sl;
typedef pair < string , int > psi;
typedef unsigned long long int ull;
typedef vector < pair <int, int >  > vpii;
typedef vector < pair < string, int > > vpsi;

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

int n;
short rep[MAXN];
bool p[MAXN];
bool q[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	vi vx;
	while( n--)
	{
		int x ;
		cin>>x;
		if( rep[x] < 2)
		{
			rep[x]++;
			vx.pb(x);
		}
	}
 
	cout<<sz(vx)<<"\n";
	for(auto v:vx)
		cout<<v<<" ";
	cout<<"\n";
 
	ll ans = 0 ;
 
	for(int c = 0 ; c<vx.size(); c++)
		if( !p[vx[c]])
		{
			ans += sz(vx)  - ( c+1);
			p[vx[c]] = true;
			deb(ans);
		}
	cout<<ans;
}