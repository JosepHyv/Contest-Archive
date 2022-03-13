#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

ll st[4*MAXN];

int build(int nd, int i, int f)
{
	if( i == f )
	{
		cin>>st[nd];
		//cout<<st[nd]<<" "<<i<<"\n";
		return st[nd];
	}
	int mm = ( i+f)/2;
	int iz = build(2*nd, i, mm);
	int de = build(2*nd+1, mm+1, f);
	return st[nd] = iz ^ de;
}

int qry(int nd, int i, int f, int li, int ld)
{
	//cout<<i<<" "<<f<<" "<<li<<" "<<ld<<" "<<st[nd]<<"\n";
	if( i > ld || f < li)
		return 0;
	if( li <= i && f <= ld)
		return st[nd];
	int mm = (i+f)/2;
	return qry(2*nd, i, mm, li, ld) ^ qry(2*nd+1, mm+1, f, li, ld);
}

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	build(1,1,n);
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		cout<<qry(1,1,n,x,y)<<"\n";
	}
}
