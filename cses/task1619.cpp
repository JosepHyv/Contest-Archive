#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }
template <class ...Args>
auto &dbg(const Args &...args) {  return ((cerr<<" "<<args), ...);}
#define dbg(...)  cerr << "( "#__VA_ARGS__" ) = "; dbg(__VA_ARGS__) << '\n'

///aqui puede ir algo 



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin>>n;
	vector < int > pp(n);
	iota(all(pp),1);
	dbgv(pp);
	vector < pair < int , int > > vx(n);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c].fi>>vx[c].se;

	sort(all(vx));

	int ans = -inf;
	priority_queue < pair < int , int > > sec;
	sec.push({-vx[0].se, vx[0].fi});
	for(int c = 1; c<n; c++)
	{
		
		while( sz(sec) && vx[c].fi >= -sec.top().fi)
			sec.pop();
		sec.push( {-vx[c].se, vx[c].fi} );
		dbg(ans, sz(sec));
		ans = max( ans, sz(sec));
	}

	cout<<ans;

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

