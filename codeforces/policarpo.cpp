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
//bool vis[500];
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
		string a;
		cin>>a;
		vector < bool > vis(300);
		bool ok = true;
		for(int c = 0 ; c<n;)
		{
			if( vis[a[c]] )
			{
				ok = false;
				break;
			}
			vis[a[c]] = true;
			bool pasa = false;
			for(int d = c; d<n; d++)
			{
				if( a[d] != a[c])
				{
					pasa = true;
					c = d;
					break;
				}
			}
			if(!pasa)break;
		}
		cout<<(ok?"YES":"NO");
		cout<<"\n";
	}
	

	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/