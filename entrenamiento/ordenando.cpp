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
	while(t--)
	{
		int n;
		cin>>n;
		vector < int > vx(n);
		for(int c = 0 ; c<n; c++)
			cin>>vx[c];
		
		sort(all(vx));

		int i = 1;
		int f = n-2;
		vector < int > ans;
		ans.pb(vx[0]);
		ans.pb(vx[n-1]);
		while( i < f )
		{
			if(abs( ans.back() - vx[f]) > abs(ans.back() - vx[i]))
				ans.pb(vx[f--]);
			else ans.pb(vx[i++]);
		}
		if(sz(ans) != n)
			ans.pb(vx[i]);	
		for(int c = n-1; c>=0; c--)
			cout<<ans[c]<<" ";
		cout<<"\n";
	}
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/