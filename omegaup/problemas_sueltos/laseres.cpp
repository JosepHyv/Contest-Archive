#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
int n;
char mm[10][10];
char vs[10][10];
struct corde
{
	int x,y;
};

vector < corde > libre;
int lamparas, formas;

void limv(corde a, short id)
{
 	vs[a.x][a.y] = 0;
}

void limh(corde a, short id)
{
	 vs[a.x][a.y] = 0;
}

bool vertical(corde a, char id ) 
{
	bool ok = true;
	bool ok2 = true;

	int x = a.x;
	int y = a.y;
	if( !vs[x][y])
		vs[x][y] = id;
	x--;
	while( x >= 0 && mm[x][y] != '*' ) // && !vs[x][y])
	{
		if( vs[x][y] == id)
		{
			ok = false;
			break;
		}
		//vs[x][y] = id;
		x--;
	}
	x = a.x+1;	
	while( x <= n-1 && mm[x][y] != '*' ) // && !vs[x][y])
	{
		if( vs[x][y] == id)
		{
			ok2 = false;
			break;
		}
		//vs[x][y] = id;
		x++;
	}
	return (ok && ok2);
}

bool horizontal( corde b, char id )
{
	bool ok = true, ok2 = true;
	int x = b.x, y = b.y;

	if( !vs[x][y])
		vs[x][y] = id;
	y--;
	while( y >= 0 && mm[x][y] != '*' )
	{
		if( vs[x][y] == id )
		{
			ok = false;
			break;
		}
		//vs[x][y]= id;
		y--;
	}
	y = b.y+1;
	while( y <= n-1 && mm[x][y] != '*' ) // && !vs[x][y])
	{
		if( vs[x][y] == id)
		{
			ok2 = false;
			break;
		}
		//vs[x][y]= id;
		y++;
	}

	return (ok && ok2);

}

string combi = "";
int  esta = 0 ;
void solve()
{
	if( sz(combi) > sz(libre) )
		return;

	if( sz( combi ) == sz( libre))
	{
		/*esta++;
		cerr<<esta<<" "<<combi<<"\n";*/
		int cc = 0;
		bool ok = true;
		for(int c = 0 ; c<sz(combi); c++ ) 
		{
			if( combi[c] == 'v')
			{
				if( !vertical(libre[c], 'v') )
				{
					//cerr<<'v'<<" "<<libre[c].x<<" "<<libre[c].y<<"\n";
					limv(libre[c], c+1);
					ok = false;
					break;
				}
				else cc++;

			}
			if( combi[c] == 'h')
			{
				if( !horizontal(libre[c], 'h'))
				{
					//cerr<<'h'<<" "<<libre[c].x<<" "<<libre[c].y<<"\n";
					limv(libre[c], c+1);
					ok = false;
					break;
				}
				else cc++;
			}

			//cc++;

		}

		if( ok )
		{
		//	cerr<<"-----"<<combi<<"\n";
			if( cc >= lamparas)
			{
				lamparas = cc;
				formas++;
			}
		}
		return;
	}

	combi += 'v';
	
	solve();
	limv(libre[sz(combi)-1], sz(combi));
	if( sz(combi))
		combi.pop_back();
	combi += 'h';
	solve();
	limh(libre[sz(combi)-1], sz(combi));
	if( sz(combi))
		combi.pop_back();
	combi += '.';
	solve();
	if( sz(combi))
		combi.pop_back();
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int c = 0; c<n; c++)
		for(int d = 0 ;d <n; d++)
		{
			cin>>mm[c][d];
			if( mm[c][d] == '.')
				libre.pb({c,d});
		}


	
	solve();
	cout<<lamparas<<" "<<formas;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/