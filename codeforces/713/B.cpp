#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;

void DBG(){	cerr<<")\n";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 
int n;
char mm[1002][1002];
bool check(int x,int y , int z, int w)
{
	if( z  < 0 || z >= n || w < 0 || w >= n ) return false;
	if( x != z && w != y ) return false;
	if( mm[z][w] == '*') return false;
	if( x == z || w == y) return true;
	return true;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector < pair < int , int > > vx;
		for(int c = 0 ; c<n; c++)
			for(int d = 0 ; d<n; d++)
			{
				cin>>mm[c][d];
				if( mm[c][d] == '*')
					vx.pb({c,d});

			}

		if( vx[0].fi  == vx[1].fi)
		{
			int x,y;
			x = vx[0].fi;
			y = vx[0].se;
			if( check(vx[0].fi, vx[0].se , vx[0].fi+1, vx[0].se))
				mm[x+1][y] = '*';
			else
				mm[x-1][y] = '*';

			x = vx[1].fi;
			y = vx[1].se;
			if( check(x,y, x+1, y))
				mm[x+1][y] = '*';
			else mm[x-1][y] = '*';

		}
		else if( vx[0].se == vx[1].se)
		{
			int x,y;
			x = vx[0].fi;
			y = vx[0].se;
			if(check(x,y,x,y+1))
				mm[x][y+1] = '*';
			else mm[x][y-1] = '*';

			x = vx[1].fi;
			y = vx[1].se;

			if(check(x,y,x,y+1))
				mm[x][y+1] = '*';
			else mm[x][y-1] = '*';

		}
		else
		{
			int x,y;
			x = vx[0].fi;
			y = vx[0].se;
			if( check(x, y, x, vx[1].se))
				mm[x][vx[1].se] = '*';

			x = vx[1].fi;
			y = vx[1].se;

			if( check(x, y, x, vx[0].se))
				mm[x][vx[0].se] = '*';


		}

		for(int c = 0 ; c<n; c++)
		{

			for(int d = 0 ; d<n; d++)
				cout<<mm[c][d];
			cout<<"\n";

		}



	}
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benqi
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE

*/

