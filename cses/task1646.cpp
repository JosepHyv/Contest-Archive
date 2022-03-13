#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

ll vx[MAXN];

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int c = 1; c<=n; c++)
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}
	while( m--)
	{
		int x,y;
		cin>>x>>y;
		cout<<vx[y] - vx[x-1]<<"\n";
	}
	
}
