#include<bits/stdc++.h>
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string t;
	cin>>t;
	vector< int > ans;
	for(int c = 0 ; c<sz(t);)
	{
		if( t[c] == '.')
		{
			ans.pb(0);
			c++;
		}
		else
			if( t[c] == '-' && t[c+1] == '.')
			{
				ans.pb(1);
				c+=2;
			}
			else {
				ans.pb(2);
				c+=2;
			}
	}
	for(auto v: ans)
		cout<<v;
}

