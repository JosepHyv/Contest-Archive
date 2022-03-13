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
void permuta(vector < int > a)
{
	int pos = 0;
	for(int c =0 ; c<sz(a); c++)
	{
		for(int d = pos, t = 0 ; t<sz(a); d++,t++)
			cout<<a[d % sz(a)]<<" ";
		cout<<"\n";
		pos ++;
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n,m;
	cin>>n>>m;
	vector < int > ans(n-1);
	ans.pb(m);

	permuta(ans);
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

