#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;
 
ll st[4*MAXN];
 
ll bld(int nd, int i, int f)
{
	if( i == f)
	{
		cin>>st[nd];
		return st[nd];
	}
	int mm = (i+f)/2;
	return st[nd] = ( bld(2*nd, i , mm) + bld(2*nd+1, mm+1, f));
}
 
void updt(int nd, int i, int f, int pos, int val)
{
	if( i == f)
		st[nd] = val;
	else
	{
		int mm = ( i+f) / 2;
		if( i <= pos && pos <= mm)
			updt(2*nd, i , mm, pos, val);
		else updt(2*nd+1, mm+1, f, pos, val);
 
		st[nd] = st[2*nd+1] + st[2*nd];
	}
}
 
ll qry(int nd, int i, int f, int li, int ld)
{
	if( i > ld || f < li)
		return 0;
	if( i >= li && f <= ld)
		return st[nd];
	int mm = (i+f) /2;
	return qry(2*nd, i, mm, li, ld) + qry(2*nd+1, mm+1, f, li,ld);
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