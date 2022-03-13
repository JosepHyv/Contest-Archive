#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

ll sums( int a)
{
	ll ans = 0 ;
	while( a > 1)
	{
		if( a % 2 )
		{
			a *= 3;
			a++;
		}
		else a/=2;
		ans++;
	}

	return ans+1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a,b;
	while(cin>>a>>b)
	{
		ll ans = 0 ;
		for(int c = min(a,b); c<=max(a,b); c++)
			ans = max( ans, sums(c));
		cout<<a<<" "<<b<<" "<<ans<<"\n";
	}
}

