//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

ll fact(ll n)
{
	ll kk = 1;
	for(ll  c = 1; c<=n; c++)
		kk *= c;
	return kk;
}

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);

	ll ans = 0 , n , rep = 5;
	cin>>n;
	while( rep <= n)
	{
		ans += n/rep;
		rep *= 5;
	}
	cout<< ans;
	
}
