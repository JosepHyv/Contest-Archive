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
int n;
int pos, ypos;
bool vis[102];

void solve()
{
	int test = ( n * n ) - ypos;
	int xpos = pos;
	cout<<( n * n ) - ypos<<" ";
	for(int c = n-1; c>=1; c--)
	{
		test += (( n * ( c -1 )) + ( (xpos + 1) % n == 0 ? n : ( xpos +1 ) % n ) );
		cout<<(( n * ( c -1 )) + ( (xpos + 1) % n == 0 ? n : ( xpos +1 ) % n ) )<<" ";
		xpos++;
	}
	dbg(test);
}	

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	cin>>n;
	pos = n;
	int aux = n;
	while( aux-- )
	{
		solve();
		cout<<"\n";
		ypos++;
		pos--;
	}
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

