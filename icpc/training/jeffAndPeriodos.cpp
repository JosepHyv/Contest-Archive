/* JosepHy 
no hay nada más por aca :3 */ 
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

vector < pair < int , int > > ans;
vector < int > v[MAXN];


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
		int n;
		cin>>n;
		for(int c = 0 ; c<n; c++)
		{
			int x;
			cin>>x;
			v[x].pb(c);
		}

		for(int c = 0 ; c<(int)1e5+1; c++)
		{
			if( sz(v[c]) == 1 ) ans.pb({c,0});
			else if( sz(v[c]) > 1  )
			{
			//	dbg(c, sz(v[c]));
				bool ok = true;
				int diff = v[c][1] - v[c][0];
				for(int d = 1; d<sz(v[c]); d++)
					if( v[c][d] - v[c][d-1] != diff)
					{
						ok = false;
						break;
					}
				if( ok )
					ans.pb({c,diff});
			}
		}
		cout<<sz(ans)<<"\n";
		//sort(all(ans));
		for(auto a: ans)
			cout<<a.fi<<" "<<a.se<<"\n";
		//uwu-vrm-uwu
	}

}

