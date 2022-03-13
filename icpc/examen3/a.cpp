#include<bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll a, b,c;
	cin>>a>>b>>c;
	if( a >= 500 )
		a -= 100;
	if( b >= 500)
		b -= 100;
	if( c >= 500)
		c -= 100;

	 a += b+c;
	cout<<a;//( a >= 500? a-100: a);
}
