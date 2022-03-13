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

ll st[4*MAXN];

int maxi = - inf;
int build( int nd, int i, int f )
{
	maxi = max( maxi, nd);
	if( i == f)
	{
		cin>>st[nd];
		return st[nd];
	}
	int med = ( i + f ) / 2;
	int lf = build( 2 * nd, i, med);
	int dr = build( 2 * nd+1, med+1, f);
	return st[nd] = max( lf, dr);

}

int query( int nd, int i, int f , int li, int ld)
{
	if( i > ld || f < li )
		return -inf;
	if( i >= li && f <= ld)
		return st[nd];
	int med = ( f + i ) / 2;
	return max( query(2*nd, i, med, li, ld), query(2*nd+1, med+1, f, li, ld));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n, k;
	cin>>n>>k;
	build(1,1,n);
	for(int c = 1; c<=n; c++)
		cout<<query(1,1,n,c,)

}
