#include<bits/stdc++.h>
#define fi first
#define se second
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
	map < int , int > vs;
	for(int c = 0 ; c<4; c++)
	{
		int x;
		cin>>x;
		vs[x]++;
	}
	ll ans = 0;
	for( auto v: vs)
		ans += v.second-1;
	cout<<ans;
	
}

