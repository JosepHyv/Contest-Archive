#include<climits>
#include<iostream>
using namespace std;

char mm[302][302];
int n,m;
int cont = 0;
int ansM, ansm = INT_MAX;
bool vs[302][302];

void ff ( int x, int y)
{	
	if( x > n || x < 1 || y > m || y < 1 || mm[x][y] == '0' || vs[x][y])
			return;
	if( mm[x][y] == 'X')
		cont++;
	vs[x][y] = true;
	int vx[] = {-1,0,1,0};
	int vy[] = {0,1,0,-1};
	for(int c = 0; c<4; c++ )
		ff(x+vx[c], y+ vy[c]);
	vs[x][y] = true;
}

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n>>m;
	for(int c = 1; c<=n; c++ ) 
		for(int d = 1; d<=m; d++)
		{
			cin>>mm[c][d];
			if( mm[c][d] == '0')
				vs[c][d] = true;
		}
	for(int c = 1; c<=n; c++)
	{
		for(int d = 1; d<=m; d++)
		{
			if( mm[c][d] != '0'  && !vs[c][d])
			{
				cont = 0;
				ff(c,d);
				ansM = max( ansM, cont);
				ansm = min( ansm, cont);
			}
		}
	}
	ansM = max( ansM, cont);
	ansm = min( ansm, cont);
	cout<<ansM<<"\n"<<ansm;
}