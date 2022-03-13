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

void DBG()
{
	cerr<<"]\n";
	return;
}

template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t))
		cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)


///aqui puede ir algo 
int vx[MAXN];
bool solucionados[MAXN];
int respuesta[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector < int > sol;
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];

	for(int c = 0; c<n; c++)
	{
		int actual = c;
		while( !sol.empty())
		{
			int pendiente = sol.back();
			if( vx[ actual ] > vx[ pendiente ])
			{
				respuesta[pendiente] = vx[actual];
				sol.pop_back();
			}
			else break;

		}
		sol.push_back(c);
	}
	while( !sol.empty() )
	{
		int sobrante = sol.back();
		sol.pop_back();
		respuesta[sobrante] = -1;
	}

	for(int c = 0 ; c<n; c++)
		cout<<respuesta[c]<<" ";



	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/