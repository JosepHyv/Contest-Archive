#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

ll suma( ll a)
{
	return ((a*a)+a)/2;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n;
	cin>>n;
	ll ans = suma(n) ;
	while( n--)
		ans += suma(n);
	cout<<ans;
}
