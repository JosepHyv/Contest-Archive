#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	ll suma = 0, sumb = 0;
	while(n--)
	{
		ll a;
		cin>>a;
		suma+=a;
	}
	while(m--)
	{
		ll b;
		cin>>b; 
		sumb+=b;
	}

	cout<<abs(suma-sumb)<<"\n";
}
