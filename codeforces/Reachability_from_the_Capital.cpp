#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x) memset(x, 0 , sizeof(x))
using namespace std;

template <class ...Args>
auto &dbg(const Args &...args) {  return ((cerr<<" "<<args), ...);}
#define dbg(...)  cerr << "( "#__VA_ARGS__" ) = "; dbg(__VA_ARGS__) << '\n'
template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 
vector < int > graph[6000];
bool good[6000];
int bads = 0 ;
bool bad[6000];


void ok(int node )
{
	good[node] = true;
	for( int x: graph[node])
		if( !good[x])
			ok(x); 
}

void notok(int node)
{
	//dbg(node,bads);
	bad[node] = true;
	bads++;
	for(int x: graph[node])
		if(!bad[x] && !good[x])
			notok(x);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n,m,k;
	cin>>n>>m>>k;
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		graph[x].pb(y);
	}
	ok(k);

	vector < pair < int , int > > sec;
	for(int c = 1; c<=n; c++)
	{
		if( !good[c] )
		{
			bads = 0 ;
			mset(bad);
			notok(c);
			sec.pb({bads,c});

		}
	}
	int ans = 0 ;
	sort(rall(sec));

	for(auto [x,y]: sec)
	{
		//dbg(x,y);
		if( !good[y])
		{
			ans++;
			ok(y);
		}
	}
	cout<<ans;
	

	//cout<<min(t,f);
	//	cerr<<c<<" "<<good[c]<<"\n";
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

