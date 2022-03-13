#include<bits/stdc++.h>
#define fi first
#define se second
using namespace std;

char tablero[12][12];
int dx[] = {-1,1};
int dy[] = {-1,1};

bool pasa[50][50];
int ans = 0;

bool check( int x, int y)
{
	if( x < 0 || x >= 10 || y < 0 || y >= 10 )
		return false;
	return true;
}

int orx, ory;
void come( int x, int y, int comida)
{
	if( !check(x,y))
		return;
	if( comida > ans)
		ans = comida;

	//cout<<x<<" "<<y<<" "<<comida<<"\n";
	for(int c = 0 ; c< 2; c++)
	{
		for(int d = 0 ; d<2; d++)
		{
			int tx = x+dx[c];
			int ty = y+dy[d];
			//cout<<"coordenadas -> "<<x<<" "<<y<<" "<<tx<<" "<<ty<<"\n";
			if(	check(tx,ty) && tablero[tx][ty] == 'B' && !pasa[tx][ty] )
			{
				if( check( tx+dx[c], ty+dy[d]) && (tablero[tx+dx[c]][ty+dy[d]] == '#' || ( tx+dx[c] == orx && ty+dy[d] == ory)) )
				{
					pasa[tx][ty] = true;
					come(tx+dx[c], ty+dy[d], comida+1 );
					pasa[tx][ty] = false;
				}
				pasa[tx][ty] = false;
				//return;
			}

		}
	}
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;
	while( t--)
	{
		vector <  pair < int , int > > fichas;
		for(int c = 0 ; c<10; c++)
			for(int d  = 0; d<10; d++)
			{
				cin>>tablero[c][d];
				if( tablero[c][d] == 'W')
					fichas.push_back({c,d});

			}

		for(int c = 0 ; c<fichas.size(); c++)
		{
			for(int i = 0 ; i< 10; i++)
				for( int  j = 0 ; j< 10; j++)
					pasa[i][j] = false;
			orx = fichas[c].fi;
			ory = fichas[c].se;
			come(fichas[c].fi, fichas[c].se, 0);
		}

		cout<<ans<<"\n";
		ans = 0;
	}

}

/*
2

.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.W.#.#.
.#.B.B.#.#
#.#.#.B.#.
.#.#.#.#.#
#.#.#.#.#.

.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.W.#.#.
.#.B.B.#.#
#.#.#.#.#.
.#.#.#.B.#
#.#.#.#.#.

*/