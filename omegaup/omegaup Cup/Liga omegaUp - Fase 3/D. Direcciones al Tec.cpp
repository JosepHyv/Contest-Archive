#include<iostream>
using namespace std;

int n,m;
int mm[202][202];
int vs[202][202];

void dfs(int x, int y, int orientacion)
{
	if( x > n || x < 1 || y > m || y < 1 )
		{
			cout<<"te perdiste";
			return;
		}
	//if( vs[x][y])
	//	return;
	if( x == n && y == m)
	{
		cout<<"llegaste";
		return;
	}
	//vs[x][y] = true;
	int vx[] = {-1,0,1,0};
	int vy[] = {0,1,0,-1};
	if( orientacion == 0 )
	{
		if( mm[x][y] == 0)
			dfs(x+vx[1], y+vy[1], 0);
		if( mm[x][y] == 1)
			dfs(x+vx[2], y+vy[2],1);
		if( mm[x][y] == 2)
			dfs(x+vx[0], y+vy[0],3);
		if( mm[x][y] == 3)
			dfs(x+vx[3], y+vy[3],2);
	}
	if( orientacion == 1 )
	{
		if( mm[x][y] == 0)
			dfs(x+vx[2],y+vy[2],1);
		if( mm[x][y] == 1)
			dfs(x+vx[3], y+vy[3],2);
		if( mm[x][y] == 2)
			dfs(x+vx[1], y+vy[1],0);
		if( mm[x][y] == 3)
			dfs(x+vx[0], y+vy[0],3);
	}
	if( orientacion == 2 )
	{
		if( mm[x][y] == 0)
			dfs(x+vx[3], y+vy[3],2);
		if( mm[x][y] == 1)
			dfs(x+vx[0], y+vy[0],3);
		if( mm[x][y] == 2)
			dfs(x+vx[2], y+vy[2],1);
		if( mm[x][y] == 3)
			dfs(x+vx[1], y+vy[1],0);
	}
	if( orientacion == 3 )
	{
		if( mm[x][y] == 0)
			dfs(x+vx[0], y+vy[0],3);
		if( mm[x][y] == 1)
			dfs(x+vx[1], y+vy[1],0);
		if( mm[x][y] == 2)
			dfs(x+vx[3], y+vy[3],2);
		if( mm[x][y] == 3)
			dfs(x+vx[2], y+vy[2],1);
	}
}
main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n>>m;
	for(int c = 1; c<=n; c++)
		for(int d = 1; d<=m; d++)
				cin>>mm[c][d];
		dfs(1,1,0);
}