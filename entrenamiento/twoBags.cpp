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
	ll y,n,k;
	cin>>y>>k>>n;
	if( (n - y ) <= 0 )
		cout<<-1;
	else
	{	
		bool ok = false;
		ll siguiente = (( y / k )+1 ) ;
		//cerr<<siguiente<<"\n";
		while( ( siguiente * k ) <= n )
		{
			cout<<(siguiente * k ) - y <<" ";
			siguiente++;
			ok = true; 
		}

		if(!ok)
			cout<<-1;

	}
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/