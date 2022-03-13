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

ll soluciona(vector < ll > arr, int i, int f )
{
	ll ans = -inf;
	ll parcial = 0 ;
	for(int c = i; c<=f; c++)
	{
		if( arr[c] > ( parcial + arr[c]))
			parcial = arr[c];
		else parcial += arr[c];
		ans = max( ans, parcial);
	}
	return max(ans, parcial);
}

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
		vector < ll > vx(n+1);
		ll allcost = 0 ;
		ll maximo = -inf;
		for(int c = 1; c<=n; c++)
		{
			cin>>vx[c];
			allcost += vx[c];
			maximo = max( maximo, vx[c]);
		}
		if( allcost <= maximo)
		{
			cout<<"NO";
		}
		else
		{
			ll adel = soluciona(vx, 1, n-1);
			if( allcost <= adel)
				cout<<"NO";
			else
			{
				adel= soluciona(vx, 2,n);
				if( allcost <= adel)
					cout<<"NO";
				else cout<<"YES";			
			}

		}
		cout<<"\n";
	}
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/