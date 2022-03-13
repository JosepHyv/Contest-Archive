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
	int ans = 0 ;
	cin>>n;
	for(int c = n; c>=1; c--)
	{
		for(int d = 1; d<=c; d++)
			if( (d*d) + 1 == c  )
			{
				//cerr<<d<<" "<<c<<"\n";
				ans++;
			}
	}
	
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/