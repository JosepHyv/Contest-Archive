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
constexpr int inf = 1e9;
constexpr short dx4[] = {-1,0,1,0};
constexpr short dy4[] = {0,1,0,-1};
constexpr short dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr short dy8[] = {-1,0,1,1,1,0,-1,-1};

struct dat
{
	int ti;
	int ss;
	int a,b;

	 bool operator<( const dat & as)
	{
		return as.ti > ti;

	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin>>n>>m;
	vector< dat > vx;
	pii ok;
	while( n--)
	{
		int a,b,k;
		cin>>a>>b>>k;
		vx.pb({a,b+k, b,k});
		ok.fi += b;
		ok.se += k;
	}
	if( ok.se < m || ok.fi < m)
	{
		cout<<-1;
		return 0;
	}

	sort(all(vx));

	queue< int > posible[3];
	for(auto v:vx)
	{
		if( v.ss == 2)
			posible[2].push(v.ti);
		else if( v.a)
				posible[0].push(v.ti);
			else if(v.b)
				posible[1].push(v.ti);

		//dbg(v.ti, v.ss, v.a, v.b);
	}


	int a = m, b = m;
	ll ans = 0;
	while( a>0 || b>0)
	{
		if( !sz(posible[0]) && !sz(posible[1]))
		{
			ans += posible[2].front();
			posible[2].pop();
			if(a>0) a--;
			if(b>0) b--;
		}
		else
		{
			int aux1 = inf, aux2 = inf, aux3 = inf;
			if( sz(posible[0]) ) 
				aux1 = posible[0].front();
			if( sz(posible[1]))
				aux2 = posible[1].front();
			if( sz(posible[2]))
				aux3 = posible[2].front();

			if( a>0 && b>0 )
			{
				if(aux3 <= ( aux1+aux2))
				{
					ans += aux3;
					if( sz(posible[2]))
						posible[2].pop();
				}
				else
				{
					if(sz(posible[0]))
						posible[0].pop();
					if(sz(posible[1]))
						posible[1].pop();
					ans += aux1+aux2;
				}
				a--,b--;
			}
			else
			{
				if(a)
				{
					a--;
					if( aux1 <= aux3)
					{
						ans += aux1;
						if( sz(posible[0]))
							posible[0].pop();
					}
					else
					{
						ans += aux3;
						if( sz(posible[2]))
							posible[2].pop();
					}
				}
				else
				{
					b--;
					if( aux2 <= aux3)
					{
						ans += aux2;
						if( sz(posible[1]))
							posible[1].pop();
					}
					else
					{
						ans += aux3;
						if( sz(posible[2]))
							posible[2].pop();
					}

				}
			}


		}
		//dbg(ans, a, b);

	}
	cout<<ans;


}
