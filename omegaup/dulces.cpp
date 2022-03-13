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
	vector < int > vx(n);
	cin>>vx[0];
	for(int c = 1; c<n; c++)
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}
	int ans =  vx[m-1];
	for(int c = m; c<n; c++)
		ans = max( ans, (vx[c] - vx[c-m]));
	cout<<ans;	

	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/