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
#define clr(x) memset( x, 0, sizeof(x))
#define press(x) setprecision(x)<<fixed
#define deb(x) cerr<< #x<< "is "<< x<<"\n"
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
typedef pair < char , int > pci;
typedef map < string, int > msi;
typedef set < long long int > sl;
typedef pair < string , int > psi;
typedef unsigned long long int ull;
typedef vector < pair <int, int >  > vpii;
typedef vector < pair < string, int > > vpsi;

void DBG()
{
	cerr<<"]\n";
	return;
}

template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t))
		cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)

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

int pass( int n, int k )
{
	int ans = 0;
	for(int c = n/2; c>= 0 ; c--)
		if( n - ( 2*c)  > k)
			break;
		else ans = n - ( 2*c);
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while( t--)
	{
		int a,b;
		cin>>a>>b;
		if( a <  b )
			cout<< b - a;
		else
		{
			if( b == 0 )
			{
				if( a % 2 == 0 )
					cout<<0;
				else 
					cout<<1;
			}
			else
			{
				int pos = pass(a,b);
				cout<<b - pos;
			}

		}
		cout<<"\n";
	}
}
