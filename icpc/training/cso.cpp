#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

pair < int, int > iz, der;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t ;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		( x? iz.fi++:iz.se++);
		( y? der.fi++:der.se++);
	}	

	cout<<min(iz.fi, iz.se) + min(der.fi, der.se);
}

