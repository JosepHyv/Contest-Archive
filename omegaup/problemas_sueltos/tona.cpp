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



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;
	int tam = 0;
	multiset< pii > orden;
	while(t--)
	{
		int x;
		int op;
		cin>>op;
		if( op == 1)
		{
			cin>>x;
			tam++;
			pii aux = {x,tam};
			orden.insert(aux);
			//dbg(sz(orden));
		}
		else if( op == 2)
		{
			//dbg("el menor antes", sz(orden));
			if( sz(orden) ) 
			{
				auto it = orden.begin();
				//it++;
				orden.erase(*it);
			}
			//dbg("el menor", sz(orden));
		}
		else
		{
			//dbg("el mayor antes", sz(orden));
			if( sz(orden))
			{
				auto it = orden.end();
				orden.erase(*it);
			}
			//dbg("el mayor", sz(orden));
		}
	}

	vector < pii > aux;
	for(auto v: orden)
	{
		pii algo = v;
		swap(algo.fi, algo.se);
		aux.pb(algo);
	}

	sort(all(aux));
	vi temp, ans;
	for(auto v: aux)
	{
		//dbg(v.se,v.fi);
		if( !sz(temp))
			temp.pb(v.se);
		else
		{
			if(temp.back() >= v.se)
			{

				if( sz(temp) > sz(ans))
					ans = temp;
				temp.clear();
				temp.pb(v.se);

				
			}
			else
				temp.pb(v.se);

		}
	}

	if( sz(temp) > sz(ans))
		ans = temp;

	write(sz(ans));
	print(ans);
}

