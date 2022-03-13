#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int frec[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>m>>n;
	for(int c = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		frec[x]++;
	}	

	for(int c = 1; c<=m; c++)
		cout<<c<<"-"<<frec[c]<<"\n";
}
