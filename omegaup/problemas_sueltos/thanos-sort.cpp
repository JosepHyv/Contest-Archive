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

int vx[MAXN];
int ans;
void solve(int i, int f )
{
	//cout<<i<<" "<<f<<"\n";
	if( i == f ) 
	{
		ans = 1;
		return;
	}	
	bool ok = true;
	for(int c = i; c<f; c++)
		if( vx[c] > vx[c+1])
		{
			ok = false;
			break;
		}
	if( ok )
		{
			ans = (f-i)+1;
			return;
		}
	solve(i, (i+f)/2);
	solve((i+f)/2+1, f);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	//cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int c = 0 ; c<n; c++)
			cin>>vx[c];
		solve(0,n-1);
		cout<<ans<<"\n";
		///uwu
	}
}
