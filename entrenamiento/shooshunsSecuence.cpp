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
	vector < int > vx(n);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	bool ok  = true;
	for(int c = k; c<n; c++)
		if( vx[c-1] != vx[c])
		{
			ok = false;
			break;
		}
	if( !ok )
		cout<<-1;
	else 
	{
		 int ans = 0 ;
		for(int c = k-1 ; c>= 0; c-- )
			if( vx[c] != vx[k-1])
				{
					ans = c+1;
					break;
				} 
		if( ans )
			cout<<ans;
		else cout<<0;
	}

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/