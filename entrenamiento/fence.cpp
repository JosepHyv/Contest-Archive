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

	int n,k;
	cin>>n>>k;
	vector < ll > vx(n);
	cin>>vx[0];
	for(int c = 1 ; c<n; c++)
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}
/*	for(int  a: vx)
		cerr<<a<<" ";
	cerr<<"\n";*/
	pair < ll, int > ans;
	ans.fi = vx[k-1];
	ans.se = 0 ;
	for(int c = k; c<n; c++)
	{
		//cerr << ans.se<<" "<<c<<" "<<c-k<<" "<<vx[c] - vx[c-k]<<"\n";;
		if( ( vx[c] - vx[c-k]) < ans.fi ) 
		{
			ans.fi = ( vx[c] - vx[c-k]);
			ans.se = c-k +1 ;
		}
	}
	cout<<ans.se+1;//<<" "<<ans.fi;

	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/