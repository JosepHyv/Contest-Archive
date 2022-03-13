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
		while (t--)
		{
			int n;
			cin>>n;
			map<int,int> ma;
			ll re=0;
			for (int i=0;i<n;++i)
			{
				int a;
				cin>>a;
				re+=ma[a-i];
				++ma[a-i];
			}
			cout<<re<<"\n";
		}

	//cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/