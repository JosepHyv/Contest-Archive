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
	int n;
	cin>>n;
	vector < pair < int , int > > vx(n);
	pair < int , int > total = {inf , -inf};
	for(int c = 0 ; c<n; c++)
	{
		cin>>vx[c].fi>>vx[c].se;
		//ans[{x,y}] = c+1;
		total.fi = min(total.fi, vx[c].fi);
		total.se = max( total.se, vx[c].se);
	}	
	for(int c = 0 ; c<n; c++)
	{
		if( vx[c] == total)
		{
			cout<<c+1;
			return 0 ;
		}
	}
	cout<<-1;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/