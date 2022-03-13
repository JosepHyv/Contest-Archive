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
	ll n;
	cin>>n;
	vector < ll > vx(n);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	sort( all( vx));
	ll ans = 0 ;
	for(ll c = n-1; c>=0; c-- ) 
	{
		if( vx[c] > c+1)
		{
			ans +=  vx[c] - (c + 1) ;
			vx[c] = c+1; 
		}
		else if ( vx[c] < c+1)
		{
			ans += ( c  +1 ) - vx[c];
			vx[c] = c+1;
		}	
	}
	cout<<ans;
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

