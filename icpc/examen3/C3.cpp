#include<bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
using namespace std;

typedef unsigned long long int ll;
typedef __uint128_t lll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;
int mod = 1000000007;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	ll t ;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		a++;
		b++;

		ll sum = (( (a % mod) * ( ( (a% mod)+1) % mod) % mod)) % mod;
		sum /= 2;
		ll ans  = (( b % mod ) * ( sum % mod )) % mod;
		cout<<ans % mod <<"\n";

	}
	
}
