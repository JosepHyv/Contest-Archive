#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0,  sizeof(x))
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;
constexpr int dx[] = {-1,0,1,0,-1,-1,1,1};
constexpr int dy[] = {0,1,0,-1,-1,1,1,-1};

void DBG()
{
	cerr<<"]\n";
	return;
}
template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t)) cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)
ll ans = 0 ;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	
	int t = 1;
	// cin >> t;
	while(t--)
	{
		
		int n,m;
		cin>>n>>m;
		vector < ll > vx(n);
		vector < vector < int > > ss(m);
		for( int c = 0 ; c<n; c++)
		{
			cin>>vx[c];
			ss[vx[c] % m].pb(c);
		}

		stack< pair < int , int > > trick;
		for( int c = 0; c<2*m; c++)
		{
			int actual = c % m;
			int tt = n / m;
			while( sz(ss[actual]) > tt)
			{
				int elm = ss[actual].back();
				ss[actual].pop_back();
				trick.push({elm, actual});
			}
			while( sz(ss[actual]) < tt && sz(trick))
			{
				int pos = trick.top().fi;
				ss[actual].pb(pos);
				vx[pos] += c - trick.top().se;
				ans += c - trick.top().se;
				trick.pop();
			}
		}
		cout<<ans<<"\n";
		for( auto a: vx)
			cout<<a<<" ";
		cout<<"\n";
		//uwu-vrm-uwu
	}

}

