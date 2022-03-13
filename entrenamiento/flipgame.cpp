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
	int l = -1;
	cin>>n;
	vector < pair < int , int > > ans;
	int x;
	int ansi = 0 ;
	for(int c = 1; c<=n; c++)
	{
		//int x;
		cin>>x;
		if( x ) ansi++;
		if( !x && l == -1 ) 
			l = 1;
		else if( !x )
			l++;
		else if( l != -1)
		{
			ans.pb({c - l, c-1 });
			l = -1;
		} 

	}
	if( !x)
		if( l == 1)
			ans.pb({n , n});
		else ans.pb({n - l +1 , n});
	//cerr<<sz(ans)<<" "<<n<<" "<<ansi<<"\n";
	if( !sz(ans))
	{
		cout<<n-1;
		return 0;
	}
	int pos = 0 ;
	int maxi = -inf;
	for(int c = 0 ; c<sz(ans); c++)
	{
		auto a = ans[c];
		int aux = a.se - a.fi +1 ;
		if( aux > maxi )
			pos = c;
	}
	int res = 0 ;
	for(int h = 0 ; h < sz(ans); h++)
	{

		int right  = (ans[h].se - ans[h].fi )+1 ;
		int raux = ansi;
		int rmax = right + raux;
		for(int c = h+1; c<sz(ans); c++)
		{
			raux -= ( ans[c].fi - ans[c-1].se) -1;
			right += ( ans[c].se - ans[c].fi) +1 ;
			rmax = max( rmax, right + raux);
		}
		res = max( res, rmax);
	}
	/*int left = (ans[pos].se - ans[pos].fi )+1 ;
	int laux = ansi;
	int	lmax = left + laux;
	for(int c = pos-1 ; c>=0; c--)
	{
		laux -= (ans[c+1].fi  - ans[c].se) + 1;
		left += (ans[c].se - ans[c].fi) + 1 ;
		lmax = max( lmax, left + laux);
	}
	cout<<max({lmax,rmax});//, n - ansi});
	*/
	cout<<res;






	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

