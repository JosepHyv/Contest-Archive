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


inline ll divisores(int a )
{
	ll suma = 0 ;
	for(int c = 1; c<=sqrt(a); c++)
		if( !(a % c ))
		{
			if( a / c == c)
				suma++;
			else suma+=2;
		}
	return suma;

}
ll memoria[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	ll ans = 0;
	constexpr ll mod = 1073741824;
	for(int a = 1; a<=n; a++)
	{
		for(int b = 1; b<=m; b++)
		{
			for(int c = 1; c<=k; c++)
			{
				int aux = a*b*c;
				ll suma = 0;
				if( !memoria[aux])
					memoria[aux] = divisores(aux) % mod;
				suma = memoria[aux] % mod;
				ans = ((ans % mod) + (suma % mod)) % mod;
				//cerr << aux<<" "<<divisores(aux)<<"\n";
			}
		}
	}
	
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/