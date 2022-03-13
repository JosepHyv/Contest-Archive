#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) ((int) (x.size()))
#define all(x) (x.begin(), x.end())
using namespace std;

typedef long long int ll;
constexpr int inf = 2e9;
constexpr int MAXN = 1e6+2;

vector < int > grap[MAXN];
bool ok;
int vis[MAXN];
void dfs(int x)
{
	if(vis[x])
	{
	//	cerr<<x<<" ya se repite\n";
		ok = false;
		 return;
	}
	vis[x] = true;
	//cerr<<x<<" "<<vis[x]<<"\n";
	for(int a : grap[x])
		dfs(a);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D
	
	int cases = 1;

	int mini =  inf, maxi = -inf;
	set < int > numbe, limpio;
	while(true)
	{

		int x,y;
		cin>>x>>y;
		if(x > 0 && y > 0 )
		{
			numbe.insert(x);
			numbe.insert(y);
			grap[x].push_back(y);
		}
		if(x == 0 && y == 0 )
		{
			ok = true;
			for(int c : numbe)
			{
				for(int a: grap[c])
				{
					vis[a]++;
					if(vis[a] > 1 ) ok = false;
				}

			}

			int cont = 0, posi = 0;
			for(int c : numbe)
			{
			//	cout<<c<<" "<<vis[c]<<"\n";
				if( !vis[c] )
				{
					posi = c;
					cont++;
				}
				vis[c] = false;
			}
			if( cont > 1)
				ok = false;

		//	dfs(posi);
			cout<<"Case "<<cases++<<" ";	
			if(ok)
				cout<<"is a tree.\n";
			else cout<<"is not a tree.\n";

			for(int c : numbe)
			{
				grap[c].clear();
				vis[c] = false;
			}
			numbe.clear();
		

		}
		if(x == -1 && y == -1)
			break;
	}	
	

	cout<<"\n";	
	///uwu - vrm - Vanessa Rodriguez Medina <3
	
}
/*
	
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE
*/