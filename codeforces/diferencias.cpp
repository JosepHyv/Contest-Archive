#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef unsigned long long int ll;
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
		int n;
		cin>>n;
		ll ans = 0 ;
		map < ll, int > cc;
		for(int c = 0 ; c<n; c++)
		{
			int x;
			cin>>x;
			x -= c;
			ans += cc[x];
			cc[x]++;
		}
		cout<<ans<<"\n";
	}

	//cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/