#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 

bool vs[5002][5002];
char mp[5002][5002];
int ans = 0;
int n,m;
void pinta( int x, int y)
{
	if( x < 1 || x > n || y < 1 || y > m || vs[x][y] || mp[x][y] != 'A')
		return;
	vs[x][y] = true;
	ans++;
	int vx[] = {-1,-1,-1,0,1,1,1,0};
	int vy[] = {-1,0,1,1,1,0,-1,-1};
	for(int c = 0 ; c<8; c++)
		pinta(x+vx[c], y+vy[c]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	cin>>n>>m;
	for(int c = 1; c<=n; c++)
	{
		for(int d = 1; d<=m; d++)
			cin>>mp[c][d];
	}
	int x,y;
	cin>>x>>y;
	pinta(x,y);
	cout<<"El lago mide "<< ans<<" celdas";
	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

