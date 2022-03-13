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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector < int > vx(n),vy(m);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	for(int d = 0 ; d<m; d++)
		cin>>vy[d];
	sort(all(vx));
	sort(all(vy));
	int a = vx[0];
	int b = vx[n-1];
	int x = vy[0];
	if( max( 2*a, b) < x)
		cout<<max(2*a,b);
	else cout<<-1;
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/	