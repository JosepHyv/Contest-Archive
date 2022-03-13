#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin>>n;
	vector < int > vx(n);
	int ans = 0;
	ll sum = 0 ;
	for(int c = 0 ; c<n; c++)
	{
		cin>>vx[c];
		sum += vx[c];
	}

	for(int c = 0 ; c<n; c++)
		if( !(sum - vx[c] & 1 ) )
			ans++;
	cout<<ans;

	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

