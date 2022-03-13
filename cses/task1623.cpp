//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

int n;
ll p1, p2;
ll vx[MAXN];
ll t, ans;

void dfs(ll pos, ll sum )
{
//	cout<<pos <<" "<<sum<<" "<<vx[pos]<<"\n";
	if( pos == n)
	{
		ll x = sum;
		ll y = t - sum;
		ans = min ( abs(x-y), ans);
		return;
	}
	dfs(pos+1, sum);
	dfs(pos+1, sum + vx[pos]);

}

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cin>>n;
	for(int c = 0 ; c<n; c++)
	{
		cin>>vx[c];
		t += vx[c];
	}
	ans = inf;
	dfs(0,0);
	cout<<ans;

}
