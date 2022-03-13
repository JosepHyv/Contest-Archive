#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
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
	vector < int > postive, negative, cero;
	while( n--)
	{
		int x;
		cin>>x;
		if( x == 0 )
			cero.pb(x);
		else if( x < 0 )
			negative.pb(x);
		else postive.pb(x);

	}
	if( postive.empty())
		for(int c = 0; c<2; c++)
		{
			postive.pb(negative.back());
			negative.pop_back();
		}
	if(sz(negative) % 2 == 0  )
	{
		cero.pb(negative.back());
		negative.pop_back();
	}
	cout<<sz(negative)<<" ";
	for( int x: negative)
		cout<<x<<" ";
	cout<<"\n";
	cout<<sz(postive)<<" ";
	for(int x: postive)
		cout<<x<<" ";
	cout<<"\n";
	cout<<sz(cero)<<" ";
	for(int x: cero)
		cout<<x<<" ";
	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

