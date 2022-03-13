//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	ll n,m;
	cin>>n>>m;
	ll aux = 0 , x;
	while(m--)
	{
		cin>>x;
		aux += x;
	}
	cout<<(aux <= n? n - aux: 0);
}
