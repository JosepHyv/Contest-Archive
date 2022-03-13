#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

bool vs[102][102];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	int x;
	cin>>x;
	while(x--)
	{
		int a,b;
		cin>>a>>b;
		vs[a][b] = true;
	}


	int ans = 0 ;
	for(int c = 1; c<n; c++)
		for(int d = 1; d<m; d++)
			if( !vs[c][d] && !vs[c][d+1] && !vs[c+1][d] && !vs[c+1][d+1])
				ans++;
	cout<<ans;
}
