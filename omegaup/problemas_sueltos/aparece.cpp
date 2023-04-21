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

	ll n,m;
	cin>>n>>m;
	int tam = sz(to_string(n));
	ll ans = 0 ;
	for(int c = 0; c<tam; c++)
	{
		ll pp = pow(10, c);
		ll curr = 0, last = 0 ;
		last = n % (( curr = pp * 10)/10); 

		ll a = (n - (n % curr ));
		ll b = a + curr;


		ll aux = (( n / pp) % 10 );

		if( aux < m )
			ans += ( a / 10 );
		else if( aux == m )
			ans += ( a / 10) + 1 + last;
		else
			ans +=  (b / 10);
	}

	cout<<ans;

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/