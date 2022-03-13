#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) ((int) (x.size()))
#define all(x) (x.begin(), x.end())
using namespace std;

typedef long long int ll;
constexpr int inf = 2e9;
constexpr int MAXN = 1e6+2;


char mm[12][12];
char aux[12][12];
int n;
bool ok;
bool vs[12][12];
int lastLevel;
void dfs(int x, int y)
{
	if( x >= 10 || y >= 10 || y < 0 || x < 0 ||  vs[x][y] || mm[x][y] == '.')
		return;
	if( x  == lastLevel) 
	{
	 	ok = true;
	 	return;
	}
	vs[x][y] = true;
	dfs(x-1,y);
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	dfs(x+1,y+1);
	dfs(x+1,y-1);
	dfs(x-1,y+1);
	dfs(x-1,y-1);	
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cerr.tie(NULL);
	//ready ? :D
	int first = 11,firstc = 11;	
	for(int  c = 0 ; c<10; c++ ) 
		for(int d = 0 ; d<10; d++)
		{
			cin>>mm[c][d];
			if(mm[c][d] != '.')
			{
				lastLevel = c;
				first = min(first,c);
				firstc = min(firstc, d);
			}
		}
	dfs(first, firstc);
	int n;
	cin>>n;
	while(n--)
	{
		char x;
		cin>>x;
		bool comp = false;
		for(int c = 0 ; c<10; c++)
		{
			
			for(int d = 0 ; d<10; d++)
			{
				aux[c][d] = mm[c][d];
				if(mm[c][d] == x)
					mm[c][d] = '.';
				vs[c][d] = false;
			}
			
		}

		ok = false;
		for(int c = 0 ; c<10; c++)
		{
			for(int d = 0; d<10; d++)
			{
				if(mm[c][d] != '.')
				{

					dfs(c,d);
					if(ok)
					{
						cout<<"Pieza "<<x<<" removida\n";
						break;
					}
				}
			}
			if(ok) break;
		}
		if(!ok)
		{
			cout<<"Pieza "<<x<<" no se puede remover\n";
			for(int c = 0; c<10; c++)
			{
				for(int d = 0 ; d<10; d++)
					cout<<aux[c][d];
				cout<<"\n";
			}
			return 0;
		}


		//cout<<x<<"<-\n";
	}
	
	for(int c = 0; c<10; c++)
	{
		for(int d = 0 ; d<10; d++)
			cout<<aux[c][d];
		cout<<"\n";
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