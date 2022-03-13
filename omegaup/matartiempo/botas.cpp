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

// void solve() {}
int botas[MAXN];
int may;

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
			botas[x]++;
			may = max( may, x);
		}
		int ans = 0 ;
		for(int c = 0; c<=may; c++)
			if( botas[c] % 2)
				ans++;
		cout<<ans<<"\n";
		///uwu
	}
}
