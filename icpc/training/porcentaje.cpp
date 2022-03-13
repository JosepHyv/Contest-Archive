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
	int n;
	cin>>n;
	int ss = n;
	double ans = 0;
	while(n--)
	{
		int x;
		cin>>x;
		ans += x;
	}
	ans =  ans / (ss*100);
	ans *= 100;
	cout<<ans;
}

