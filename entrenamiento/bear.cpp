#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a,b;
	cin>>a>>b;
	int ans = 0;
	while( a <= b )
	{
		a *= 3;
		b *= 2;
		ans++;
	}
	cout<<ans;
}

