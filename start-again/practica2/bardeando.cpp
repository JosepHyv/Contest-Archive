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
	int n,m;
	cin>>n>>m;
	int ss = 0 ;
	while(m--)
	{
		int x;
		cin>>x;
		ss+=x;
	}
	if(ss <= n)
		cout<<n -ss ;
	else
		cout<<0;
	
}
