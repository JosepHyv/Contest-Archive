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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector < int  > vx(n);
	for( auto &v: vx)
		cin>>v;

	int sums = inf;
	pair < int, int > ans;
	for(int c = 0 ;c<n; c++)
		if( abs( vx[c] - vx[(c+1)%n] ) < sums)
		{
			sums = abs( vx[c] - vx[(c+1)%n] );
			ans = {c,(c+1)%n};
		}

	cout<<ans.fi+1<<" "<<ans.se+1;
}

