#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
bool vs[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k,l,n,m,d;
	cin>>k>>l>>n>>m>>d;
	if( k == 1 || l == 1 || n == 1 || m == 1 ) 
		cout<<d;
	else
	{
		int ans = 0;
		for(int c = k; c<=d; c+=k)
			if( !vs[c])
			{
				ans++;
				vs[c] = true;
			}
		for(int c = l; c<=d; c+=l)
			if( !vs[c])
			{
				ans++;
				vs[c] = true;
			}
		for(int c = n; c<=d; c+=n)
			if( !vs[c])
			{
				ans++;
				vs[c] = true;
			}
		for(int c = m; c<=d; c+=m)
			if( !vs[c])
			{
				ans++;
				vs[c] = true;
			}
			cout<<ans;
	}
	
}

