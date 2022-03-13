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

	int n;
	cin>>n;
	while( n != 1)
	{
		cout<<n;
		if( n % 2 )
			n = ( n * 3)+1;
		else n /= 2;
		cout<<"\n";
	}
	cout<<1;
	
}
