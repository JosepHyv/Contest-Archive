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

struct monotone
{
	deque < int > mons;
	void insert( int a )
	{
		while( !mons.empty() && a < mons.back())
			mons.pop_back();
		mons.pb(a);
	}
	void erase()
	{
		if(sz(mons))
			mons.pop_front();
	}
};

int n;
monotone ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/* n
	 1 x
	 2 mins*/
	cin>>n;
	while( n--)
	{
		short op;
		cin>>op;
		if( op == 1)
		{
			int x;
			cin>>x;
			ans.insert(x);
		}
		else ans.erase();
	}

	cout<<sz(ans.mons)<<"\n";
	for(auto v: ans.mons)
		cout<<v<<" ";

	






}