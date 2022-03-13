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
	int t;
	cin>>t;
	while( t--)
	{
		ll n;
		cin>>n;
		ll ans = 0 ;
		ll transformada = 0;
		for(ll c = '1'; c<='9'; c++)
		{
			string coso ="";
			for(ll d = 0; ; d++)
			{
				coso += c;
				transformada = atoll(coso.c_str());
				if( transformada > n)
					break;
				//cerr<<transformada<<"\n";
				ans++;
			}
		}
		cout<<ans;

		cout<<"\n";
	}
		

	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/