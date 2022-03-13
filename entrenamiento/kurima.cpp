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


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin>>n;
	vector < ll > vx(n), vy(n);
	cin>>vx[0];
	vy[0] = vx[0];
	for(int c = 1 ; c<n; c++)
	{
		cin>>vx[c];
		vy[c] = vx[c];
		vx[c] += vx[c-1];
	}
	sort(all(vy));
	for(int c = 1; c<n; c++)
		vy[c] += vy[c-1];

	int m;
	cin>>m;
	while( m--)
	{
		int a,x,y;
		cin>>a>>x>>y;
		int ai = max(x,y);
		int bi = min(x,y);
		x = ai-1;
		y = bi-1;
		if( a % 2 )
		{
			if( y )
				cout<<vx[x] - vx[y-1];
			else cout<<vx[x];
		}
		else
		{
			if( y )
				cout<<vy[x] - vy[y-1];
			else cout<<vy[x];
		}
		cout<<"\n";
		
	}
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

