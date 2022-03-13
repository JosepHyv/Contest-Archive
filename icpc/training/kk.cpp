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
	int x;
	cin>>n>>x;
	n--;
	int mini = x, maxi = x;
	int ans = 0 ;
	while( n--)
	{
		cin>>x;
		if( x > maxi )
		{
			maxi = x;
			ans++;
		}
		if( x < mini)
		{
			mini = x;
			ans++;
		}
	}

	cout<<ans;
	
}

