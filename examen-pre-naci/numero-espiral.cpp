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

template < class A > void read( vector < A >& v);
template < class A, size_t S > void read( array < A , S>& a);

template < typename... T> 
void read(T&... args)
{
	((cin >> args), ...);
}

template < class A >
void read( vector< A > & x)
{
	for( auto &a: x)
		read(a);
}
template < class A, size_t S> 
void read( array < A, S > &x)
{
	for(auto &a: x)
		read(a);
}

template < typename... T > 
void print(T... args)
{
	((cout << args <<" "), ...);
}

template < typename... T > 
void write(T... args)
{
	((cout<<args<<"\n"), ...);
}
template < class A > 
void print(vector< A >&x)
{
	for(auto v:x)
		print(v);
}

constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr int inf = 2e9;
constexpr short dx4[] = {-1,0,1,0};
constexpr short dy4[] = {0,1,0,-1};
constexpr short dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr short dy8[] = {-1,0,1,1,1,0,-1,-1};

void solve()
{
	return;
}

int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	int ans[] = {1, n, n-1, 2};
	for(int c = 0, d = 0; d<n; d++,c++)
	{
		cout<<ans[c % 4]<<" ";
		if( c % 4 == 0 )
			ans[c%4] += 2;
		if( c % 4 == 1)
			ans[c%4] -= 2;
		if( c % 4 == 2)
			ans[c%4] -= 2;
		if( c % 4 == 3 )
			ans[c%4] += 2;
	}
}
