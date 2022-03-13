#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;
ll bit[MAXN];

void updt(int x, int val)
{
	
}


int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	bld(1,1,n);
	while( m--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if( x == 1)
			updt(1,1,n,y,z);
		else
			cout<<qry(1,1,n,y,z)<<"\n";
	}
	
}
