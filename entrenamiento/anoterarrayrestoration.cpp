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
typedef pair < int , int > pii;
typedef unsigned long long int ull;

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

int t,n;
int x,y;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while( t--)
	{
		read(n,x,y);
		int diff = ( y - x)+1;
		bool ok = false;
		vi aux, ans;
		
		for(int c = 1; c<=diff; c++)
		{
			ok = false;
			int curr = y;
			while( curr >=1 && sz(aux) < n)
			{
				if( curr == x)
					ok = true;
				aux.pb(curr);
				curr -= c;
			}
			curr = y+c;
			while( sz(aux) < n)
			{

				aux.pb(curr);
				curr += c;
			}

			if( ok )
			{
				sort(all(aux));
				if( !sz(ans) || ans.back() > aux.back())
					ans = aux;
			}
			aux.clear();
		}
		for( auto v: ans)
			cout<<v<<" ";
		cout<<"\n";
	}
}
