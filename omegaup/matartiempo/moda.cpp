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

int v[MAXN];
pair < int, int > ans;
// void solve() {}

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
		{
			int x;
			cin>>x;
			v[x]++;
		}
		for(int c = 0 ; c<(int)1e3+1; c++)
			if( ans.fi < v[c])
			{
				ans.fi = v[c];
				ans.se = c;
			}
		cout<<ans.se;
		///uwu-vrm-uwu
	}
}
