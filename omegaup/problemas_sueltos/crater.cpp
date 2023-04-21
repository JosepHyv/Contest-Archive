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
bool vis[600][600];
int luna[600][600];
int rocas = 0 ;
int n,m;
void pinta( int x, int y)
{
	if( x >= 1 && x<=n && y >= 1 && y<=m && luna[x][y] && !vis[x][y] )
	{
		vis[x][y] = true;
		rocas += luna[x][y];
		pinta(x-1,y); // arriba 
		pinta(x,y+1); // derecha 
		pinta(x+1,y); // abajo
		pinta(x,y-1); // izquierda
		return;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>m;
	for(int c =1; c<=n; c++) 
	{
		for(int d =1; d<=m; d++)
		{
			cin>>luna[c][d];
		}
	}

	int maximo = -inf;
	int ans = 0 ;
	int crater = 0 ;
	for(int c = 1; c<=m; c++)
	{
		for(int d = 1; d<=n; d++)
		{
			if( !vis[d][c] && luna[d][c])
			{
				crater ++;
				pinta(d,c);
				if( maximo < rocas)
				{
					ans = crater;
					maximo = rocas;
				}
				rocas = 0;
			}
		}
	}


	cout<<ans<<" "<<maximo;

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/