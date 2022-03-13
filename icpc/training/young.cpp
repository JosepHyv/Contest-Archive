#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;
	int ans[] = {0,0,0};
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		ans[0] += a;
		ans[1] += b;
		ans[2] += c;
	}

	bool ok = true;
	for(int c = 2;  ~c; c--)
		if( ans[c] != 0 )
		{
			ok = false;
			break;
		}
	
	cout<<(ok ? "YES":"NO")<<"\n";
}

