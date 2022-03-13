// ojo se que en el caso 
/*

5 3 
2 5 8 11 14

esta idea se rompe */
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
int vx[MAXN];
int n,m;
ll link[MAXN];
ll ans;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	for(int c = 0; c<n; c++)
	{
		cin>>vx[c];
		link[vx[c] % m ]++;
	}
	for(int c = 0; c<m; c++)
	{
		//cout<<link[c]<<" ";
		ans += (link[c] * (link[c]-1)) / 2;
	}
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/