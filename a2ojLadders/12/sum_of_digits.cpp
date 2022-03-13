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

int calc(int a)
{
	int ans =  0;
	while( a  )
	{
		ans += ( a % 10 );
		a /= 10 ;
	}

	return ans ;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	string a;
	cin>>a;
	int ans = 1;
	int sum = 0 ;
	for(char x: a)
		sum +=( (int) ( x - '0'));
	if( sz(a) <= 2   && atoi(a.c_str()) < 10 )
	{
		cout<< 0;
		return 0;
	}
	while( sum >= 10 )
	{
		ans++;
		sum = calc(sum);
	//	dbg(ans,sum);
		//cin>>ans;
	}
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

