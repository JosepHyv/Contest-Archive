#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
int cuenta[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n,m;
	cin>>n>>m;
	set < int > ss;
	vector < pair < int , int > > vx(n);
	for(int c = 0; c<n; c++)
		cin>>vx[c].fi;
	for(int c = n-1; c>=0; c--)
	{
		ss.insert(vx[c].fi);
		vx[c].se = sz(ss);
	}
	while(m--)	
	{
		int x;
		cin>>x;
		x--;
		cout<<vx[x].se;// - (vx[x].se-1);
		cout<<"\n";
	}
	
	

	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

