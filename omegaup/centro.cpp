#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
pair < int, int > vx[12];
int distancia(pair< int , int > a, pair< int , int >  b )
{
	return abs( a.fi - b .fi) + abs( a.se - b.se);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	//vector < pair < int , int > > vx(n);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c].fi>>vx[c].se;
	sort(vx,vx+n);
	ll ans = inf;
	do
	{
		ll temp = 0 ;
		for(int c = 0 ; c<n-1; c++)
			temp += distancia(vx[c], vx[c+1]);
		ans = min( ans, temp);
	}
	while(next_permutation(vx,vx+n));
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/