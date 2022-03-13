#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vi vx(m);
	for( auto &a: vx)
		cin>>a;
	ll ans = vx[0]-1;
	for(int c = 1; c<m; c++)
		if( vx[c] > vx[c-1])
			ans += vx[c] - vx[c-1];
		else if( vx[c] < vx[c-1])
			ans += vx[c] + ( n - vx[c-1]);
	cout<<ans;

}

