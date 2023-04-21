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
struct coordenada
{
	int x, y, pasos;
};

int n,m;
queue < coordenada > cola;
bool mapa[52][52];
coordenada inicio;
int fila, columna;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ;d<m; d++)
			cin>>mapa[c][d];
	cin>>inicio.x>>inicio.y;
	inicio.pasos = 1;
	cin>>fila>>columna;
	mapa[inicio.x][inicio.y] = true;
	cola.push(inicio);

	while( !cola.empty() /* cola.size() */ )
	{
		coordenada raiz = cola.front();
		cola.pop();
		//cerr<<" mi raiz es -> ("<<raiz.x<<", "<<raiz.y<<", "<<raiz.pasos<<")\n";
		if( raiz.x == fila && raiz.y == columna)
		{
			cout<<raiz.pasos<<"\n";
			return 0;
		}

		coordenada hijo = raiz;
		/* arriba */
		hijo.x--;
		hijo.pasos++;
		if( hijo.x >= 0 && !mapa[hijo.x][hijo.y])
		{
			mapa[hijo.x][hijo.y] = true;
			cola.push(hijo);
		}

		/*derecha*/
		hijo = raiz;
		hijo.y++;
		hijo.pasos++;
		if( hijo.y < m && !mapa[hijo.x][hijo.y])
		{
			mapa[hijo.x][hijo.y] = true;
			cola.push(hijo);
		}

		/* abajo */ 
		hijo = raiz;
		hijo.x ++;
		hijo.pasos++;
		if( hijo.x < n && !mapa[hijo.x][hijo.y])
		{
			mapa[hijo.x][hijo.y] = true;
			cola.push(hijo);
		}

		/* izquierda */
		hijo = raiz;
		hijo.y--;
		hijo.pasos++;
		if( hijo.y >= 0 && !mapa[hijo.x][hijo.y])
		{
			mapa[hijo.x][hijo.y] = true;
			cola.push(hijo);
		}

	}
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/