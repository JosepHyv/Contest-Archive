#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;
 
void DBG(){	cerr<<")\n";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<class T1, class T2>
ostream & operator <<(ostream &os, const pair < T1, T2>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}
void press(int n = 15){	cout<<setprecision(n)<<fixed;}
void setIO( string name = "")
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	if(sz(name))
	{
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}
 
typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 
 
///aqui puede ir algo 

char mm[102][102];

bool inRange(int xLimit, int yLimit, int x, int y)
{
	if(x < 1 || x > xLimit || y < 1 || y > yLimit ) return false;
	return true;
}

bool isValid(int xLimit, int yLimit, int currx, int curry)
{
	int xs[] = {-1, 0, 1, 0};
	int ys[] = {0, 1, 0, -1};
	int rommie = 0 ;
	for(int c = 0 ; c< 4; c++)
	{
		int x = xs[c] + currx;
		int y = ys[c] + curry;
		if(inRange(xLimit, yLimit,x, y ) && mm[x][y] == '^')
			rommie ++;
	}
	return rommie >= 2;
}

void flootfill(int n, int m, int orix, int oriy,  int x, int y)
{
	if(!inRange(n,m,x,y)) return;
	if(mm[x][y] != '.' && x != orix && y != oriy)  return;
	

	mm[x][y] = '^';
	flootfill(n,m, orix, oriy, x-1,y);
	flootfill(n,m, orix, oriy, x,y+1);
	flootfill(n,m, orix, oriy, x+1,y);
	flootfill(n,m, orix, oriy, x,y-1);

	cout<<"\nIteracion en recursion\n";
	for(int c = 1; c<=n; c++)
	{
		for(int d= 1; d<=m; d++)
			cout<<mm[c][d];
		cout<<"\n";
	}
	cout<<"=======-------------------\n";
	if(!isValid(n,m,x,y))
		mm[x][y] = '.';

}

int main()
{
 	setIO();
 	int t;
 	cin>>t;
 	int currCase = 1;
 	while(t--)
 	{
 		cout<<"Case #"<<currCase++<<": ";
		int n,m;
		cin>>n>>m;
		int trees = 0 ;
		for(int c = 1; c<=n; c++)
			for(int d = 1; d<=m; d++)
			{
				cin>>mm[c][d];
				if(mm[c][d] == '^')
					trees++;
			}

		if(!trees)
		{
			cout<<"Possible\n";
			for(int c = 1; c<=n; c++)
			{
				for(int d = 1; d<=m; d++)
					cout<<mm[c][d];
				cout<<"\n";
			}
			for(int c = 1; c<=n; c++)
			{
			
				for(int d = 1; d<=m; d++)
					cout<<mm[c][d]<<" ";
				cout<<"\n";
			}


		}
		else
		{
			for(int c = 1; c<=n; c++)
				for(int d = 1; d<=m; d++)
					if(mm[c][d] == '^')
						flootfill(n,m,c,d,c,d);
			//debbugg

			bool ok = true;
			for(int c = 1; c<=n; c++)
				for(int d = 1; d<=m; d++)
					if(mm[c][d] == '^')
						ok = ok && isValid(n,m,c,d);

			if(!ok)
				cout<<"Impossible\n";
			else
			{
				cout<<"Possible\n";
				for(int c = 1; c<=n; c++)
				{
					for(int d= 1; d<=m; d++)
						cout<<mm[c][d];
					cout<<"\n";
				}
			}
		}

		//cout<<"\n";
 	}
 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benq
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE
 
*/
