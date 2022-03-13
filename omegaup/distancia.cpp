/// ya tengo sueño UnU
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
	double  n,m,r;
	cin>>n>>m>>r;
	int ans = 0 ;
	for(int c = n-r; c<=n+r; c++)
		for(int d = m-r; d<=m+r; d++)
		{
			double dist = double(( n - c));
			dist *= dist;
			 ll aux  =  double(( m - d));
			 aux *= aux;
			 dist += aux;
			if( double(dist) < double(r*r))
				ans++; 
		}
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/