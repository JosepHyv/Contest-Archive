//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;
constexpr ll mod = 1e9+7;

ll dp[MAXN];
ll n;
int sol( ll i)
{
	if( i < 0 )
		return 0;
	if( i == 0 )
		return 1;
	if( dp[i])
		return dp[i] % mod;
	for(int c = 6; c>=1; c--)
		dp[i] = ( sol( i - c) % mod + dp[i] % mod ) % mod;
	return dp[i] % mod;
}

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	cin>>n;
	cout<<sol(n);
}
