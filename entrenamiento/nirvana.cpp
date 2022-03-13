//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define pob pop_back
#define pof pop_front
#define pf push_front
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

ll n;
ll ans = 0;
bool ok = true;

void multi(ll coso)
{
	ok = true;
	ll aux = 1;
	while( coso )
	{
		if( !(coso % 10) )
			ok = false;
		aux *= coso % 10 ;
		coso /= 10 ;
		//dbg(coso, aux, ok);
	}

	ans = aux;
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	ll maxi = 0;
	
	{
		multi(c);
		if( ok )
		{
			if( maxi >= ans)
			{
				cout<<maxi;
				return 0;
			}
			else maxi = max( maxi, ans);
		}

	}
	cout<<maxi;
}
