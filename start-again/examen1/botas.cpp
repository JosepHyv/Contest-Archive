#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int backup[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x;
	cin>>n;
	int maxi = 0 ;
	for(int c = 0; c<n; c++)
	{
		cin>>x;
		maxi = max( maxi, x);
		backup[x]++;
	}

	int ans = 0 ;
	for(int c = 0; c<=maxi; c++)
		if( backup[c]%2 )
			ans++;
	cout<<ans;
	
}
