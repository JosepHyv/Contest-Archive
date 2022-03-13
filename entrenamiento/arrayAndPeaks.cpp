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
		int n,k;
		cin>>n>>k;
		int mitad = 0 ;
		if( n % 2 )
			mitad = ( n / 2 )+1;
		else mitad = n/2;

		if( k >= mitad )
			cout<<-1;
		else
		{
			int pos = (  n - k )+1;
			int c = 1;
			bool pas = 1;
			for(; c<= ( n - k ) && pos <= n; )
			{
				if( pas )
					cout<<c++<<" ";
				else cout<<pos++<<" ";
				pas = !pas;
			}
			for(; c<= ( n - k ); c++)
				cout<<c<<" ";
		}
		cout<<"\n";
	}

	

	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/