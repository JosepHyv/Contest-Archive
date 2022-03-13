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
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 
 
char mm[102][102];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int t;
	cin>>t;
	int cases = 1;
	while(t--)
	{
		int n;
		cin>>n;
		vector < int > fila(n), colum(n);
		for(int c = 0 ; c<n; c++) 
		{
			int ex = 0;
			bool cero = false;
			for(int d = 0 ; d<n; d++)
			{
				cin>>mm[c][d];
				if( mm[c][d]  == 'O' )
				{
					cero = true;
					colum[d] = inf;
					fila[c] = inf;
				} 
				if( mm[c][d] == 'X') ex++;

			}
			if(!cero)
				fila[c] = n - ex;
		}


		for(int c = 0 ; c<n; c++) 
		{
			int ex = 0;
			bool cero = false;
			for(int d = 0 ; d<n; d++)
			{
				//cin>>mm[c][d];
				if( mm[d][c]  == 'O' )
				{
					cero = true;
					colum[c] = inf;
					//fila[d] = inf;
				} 
				if( mm[d][c] == 'X') ex++;

			}
			if(!cero)
				colum[c] = n - ex;
		}
		int mini = inf;
		int ans = 0 ;
		dbg(cases, "# ");
		dbg(fila);
		dbg(colum);
		for(int c = 0 ; c<sz(fila); c++)
			mini = min({mini, fila[c], colum[c]});

		bool ok = true;
		if( mini == inf )
			ok = false;

		if( ok )
			for(int c = 0 ; c<sz(fila); c++)
				if(mini == fila[c] && mini == colum[c])
					ans ++;

		cout<<"Case # "<<cases<<": ";
		if( ans == 0 )
		{
			if( mini != inf )
				cout<<mini <<" 1";
			else
				cout<<"Impossible";
		}
		else
			cout<<mini<<" "<<ans*2;
		cout<<"\n";
		//dbg(fila, colum);
		cases++;
	}
	
	

	cout<<"\n";
	///uwu - vrm - Vanessa Rodriguez Medina <3
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

