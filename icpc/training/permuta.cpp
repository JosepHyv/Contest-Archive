#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
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
	if( n % 2 )
		cout<<-1;
	else
	{
		vector < int > ans(n);
		iota(all(ans), 1);
		for(int c = 0; c<sz(ans); c+=2)
			cout<<ans[c+1]<<" "<<ans[c]<<" ";
	}
	
}

