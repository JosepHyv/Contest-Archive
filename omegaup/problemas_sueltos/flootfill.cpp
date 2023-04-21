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
char pintura[102][102];
int regiones[102][102];

void humanos( int x, int y, char color, int region, int op)
{
	

	
	regiones[x][y] = region;
	humanos(x-1,y,color, region);
	humanos(x,y+1,color, region);
	humanos(x+1,y,color, region);
	humanos(x,y-1,color, region);
	return;		
	
}

void vacas()
{

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<n; d++)
			cin>>pintura[c][d];
	

	int regionesEncontradas = 0 ;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ;d<n; d++)
		{		
			///posicion actual no esta pintada
			if( !regiones[c][d] )
			{
				regionesEncontradas++;
				humanos(c,d,pintura[c][d], regionesEncontradas);
			}
		}
	
	cout<<regionesEncontradas;

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/