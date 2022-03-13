#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

ll fib( int n )
{
	if( n <= 1 )
		return 1;
	ll curr = 1, ans = 1;
	for( int c  = 2; c<n; c++)
	{
		ll aux = ans;
		ans += curr;
		curr = aux;
	} 
	return ans;


}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
		
	int n = 3;
	while( n--)
	{
		int x;
		cin>>x;
		cout<<fib(x)<<"\n";
	}
}
