#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int a,b;
	int ans = 0 ;
	int sums = 0 ;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if( sums >= a)
			sums -= a;
		else sums = 0 ;
		sums += b;
		ans = max( ans, sums);
	}
	cout<<ans;
	
}

