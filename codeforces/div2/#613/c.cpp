#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

ll x;
ll ans;

ll lcm ( ll a, ll b ) 
{
	return (a*b) / __gcd(a,b);
}

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>x;
	for(ll c = 1; c<=sqrt(x); c++)
	{
		if( x%c == 0  && lcm(c, x/c) == x)
			ans = c;
	}
	cout<<ans<<" "<<x/ans;
}