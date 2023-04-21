#include<iostream>
#define sz(x) (int)x.size()
using namespace std;



///aqui puede ir algo 
char boggle[10][10];
string vx[102];
bool vy[102];
int ans = 0 ;
bool vis[10][10];
/*
Puntos 
3-4 = 1 
5 = 2
6 = 3
7 = 5 
8 - 100  = 11
*/
bool ok = false;
int xx[] = {-1,-1,-1,0,1,1,1,0};
int yy[] = {-1,0,1,1,1,0,-1,-1};
void marcado(int x, int y, int pos, string final)
{
	if(pos > sz(final) ) 
		return;
	if( x < 0 || x >= 4 || y < 0 || y >= 4 || vis[x][y])
		return;
	if( ok )
		return;
	if( boggle[x][y] != final[pos])
		return;
	//cerr<<x<<" "<<y<<" "<<final[pos] <<" "<<final<<" "<<ok<<"\n";
	if( pos ==sz(final)-1 )
	{
		ok = true;
		return;
	}
	vis[x][y] = true;
	for(int c = 0 ; c<8; c++)
		marcado(x+xx[c], y+yy[c], pos+1, final);
	vis[x][y]  = false;

}

bool solve( string a )
{
	ok = false;
	for(int c = 0; c<4; c++)
		for(int d = 0 ; d<4; d++)
		{
			if(ok )
				return true;
			if( boggle[c][d] == a[0])
				marcado(c,d,0,a);

		}
	return ok;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	for(int c = 0 ; c<4; c++)
	{
		for(int d = 0 ; d<4; d++)
			cin>>boggle[c][d];
	}
	int n;
	cin>>n;
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	int tam = 0 ;
	for(int c = 0 ; c<n; c++)
		if(!vy[c])
			for(int d = c+1; d<n; d++)
				if( vx[c] == vx[d])
					vy[d] = true;


	for(int c = 0 ; c<n; c++)
	{
		if(sz(vx[c]) < 3 || vy[c])
			continue;
		int puntos = 0;
		if( sz(vx[c]) >= 3 && sz(vx[c]) <= 4 )
			puntos = 1;
		else if( sz(vx[c]) == 5 )
			puntos = 2;
		else if ( sz(vx[c]) == 6)
			puntos = 3;
		else if( sz(vx[c]) == 7 )
			puntos = 5;
		else if ( sz(vx[c]) >= 8 ) 
			puntos = 11;

		if( solve(vx[c]) )
			ans += puntos;
	}


	cout<<ans;

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/