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

ll t;
ll a,b,x,y,k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>t;
	while( t--)
	{
		ll aux, auxb;
		read(a,b,x,y,k);
		aux = a, auxb = b;
		if(x < y)
		{
			if( k >= a - x)
			{
				k -= a - x;
				a -= ( a - x );
				if( k >= b - y )
				{
					k -= (b - y);
					b -= (b - y);
				}
				else
					b -= k;
			}
			else
				a -= k;
		}
		else
		{
			if( k >= b - y)
			{
				k -= (b - y);
				b -= (b - y);
				if( k >= a - x)
				{
					k -= a - x;
					a -= ( a - x );
				}
				else
					a -= k;

			}
			else
				b -= k;
		}
		ll ans[3];
		ans[0] = a*b;
		a = aux;
		b = auxb;
		if(  k >= a - x)
		{
			ans[1] = a - ( a - x);
			k -= ( a - x);
			if( k && k >= b - y )
				ans[1] *= b - ( b - y );
			else
				ans[1] *= ( b- k);
		}
		else
		{
			ans[1] =  a - k ;
			ans[1] *= b;
		}
		if( k >= b - y )
		{
			ans[2] = b - ( b - y );
			k -= ( b - y);
			if( k && k >= a - x)
				ans[2] *= a - ( a- x);
			else
				ans[2] *= ( a - k);
		}
		else
		{
			ans[2] = b - k;
			ans[2] *= a;
		}
		cout<<min({ ans[0], ans[1], ans[2] } )<<"\n";
	}
}
