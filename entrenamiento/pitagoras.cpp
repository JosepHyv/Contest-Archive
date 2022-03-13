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


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n;
	cin>>n; 
	ll ans = 0 ;
	for(int  c = 1; c<=n; c++)
	{
		for(int d = c+1; d<=n; d++)
		{
			ll coso = (c*c ) + (d*d);
			ll aux = coso;
			aux = sqrt(aux);
			if( (aux * aux) == coso && aux <= n )
				ans++;
		}
	}
	
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

