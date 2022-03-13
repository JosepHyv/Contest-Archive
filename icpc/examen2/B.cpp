#include<bits/stdc++.h>
using namespace std;

short mm[30][30];
bool ok = true;

bool check( int x, int y)
{
	if( x  < 1 || y < 1 || y > 10 || x > 10)
		return false;
	if( mm[x][y]) 
		return false;
	return true;
}

void paint( int x, int y, int z, int l)
{
	if(!ok ) return;
	if( z == 0)
	{
		for(int c = 0; c<l; c++)
			if( check(x, y+c))
				mm[x][y+c] = 1;
			else
			{
				ok = false;
				return;
			}
	}
	else
	{
		for(int c = 0; c<l; c++)
				if( check(x+c, y))
					mm[x+c][y] = 1;
				else
				{
					ok = false;
					return;
				}	
	}
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	while(n--)
	{
		int x,y,g,l;
		cin>>g>>l>>x>>y;
	
		paint(x,y,g,l);

	}
		/*for(int c = 1; c<=10; c++)
		{
			for(int d =1; d<=10; d++)
				cout<<mm[c][d]<<" ";
			cout<<"\n";
		}*/
		cout<<(ok? "Y":"N")<<"\n";
}

