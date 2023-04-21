#include<queue>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int robot[1002][1002];
bool ovi[1002][1002];
struct nd
{
	int x,y;
	int paso;
};

queue < nd > cl;
char mm[1002][1002];
nd entrada;
int vx[] = {-1, 0, 1, 0};
int vy[] = {0, 1, 0, -1};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D
	int n,m,k;
	cin>>n>>m>>k;
	for(int c = 1; c<=n; c++)
	{
		for(int d = 1; d<=m; d++)
		{
			cin>>mm[c][d];
			if( mm[c][d] == 'O')
				entrada = {c,d,0};
			else if( mm[c][d] == 'E')
			{
					robot[c][d] = -1;
					cl.push({c,d,0});
			}

		}
	}

	while( !cl.empty() )
	{
		nd r = cl.front();
		cl.pop();
		for(int c = 0 ; c<4; c++)
		{
			nd h = r;
			h.x += vx[c];
			h.y += vy[c];
			h.paso++;
			if( h.x > 0 && h.x <= n && h.y > 0 && h.y <=m && h.paso <= k && (mm[h.x][h.y] == '.' || mm[h.x][h.y] == 'M') && !robot[h.x][h.y])
			{
				robot[h.x][h.y] = h.paso;
				cl.push(h);
			}
		}
	}

	/*for(int c = 1; c<=n; c++)
	{
		for(int d = 1; d<=m; d++)
			cout<<robot[c][d]<<" ";
		cout<<"\n";
	}*/

	cl.push(entrada);
	ovi[entrada.x][entrada.y] = true;
	while( !cl.empty())
	{
		nd r = cl.front();
		cl.pop();
		if( mm[r.x][r.y] == 'M' ) 
		{
			/*for(int c = 1; c<=n; c++)
			{
				for(int d = 1; d<=m; d++)
					cout<<ovi[c][d]<<" ";
				cout<<"\n";
			}*/
			cout<<"Come on Krista!";
			return 0;
		}
		for(int c = 0 ;c <4; c++)
		{
			nd h = r;
			h.x += vx[c];
			h.y += vy[c];
			h.paso ++;
			if( h.x > 0 && h.y > 0 && h.x <=n && h.y <= m && h.paso <= k && !ovi[h.x][h.y] && ( mm[h.x][h.y]== 'M' || mm[h.x][h.y] == '.') && ( robot[h.x][h.y] == 0 || h.paso < robot[h.x][h.y])  )
			{
				ovi[h.x][h.y] = true;
				cl.push(h);
			}
		}
	}

	
	cout<<"Error 303!";
	

	cout<<"\n";	
	///uwu - vrm 
	

}