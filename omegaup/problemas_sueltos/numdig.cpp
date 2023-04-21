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

// void solve() {}
int digitos[] = {0,1,10, 100, 1000, 10000, 100000, 1000000, 10000000,100000000};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	//cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll ans = 0;
		
			
			int pos = 0 ;
			for( int c = 1; c<=9; c++)
			{
				if( n == digitos[c])
					pos = c;
				if( n < digitos[c])
					pos = c-1;
				if( pos )
					break;
			}
			//cout<<n<<" "<<pos<<"\n";
			while( n)
			{
				 
				//cout<<ans<<" "<<n<<" "<<pos<<"\n";
				ans += abs(n - digitos[pos]) * pos + pos ;
				n = pos[digitos]-1;
				pos--;
			}


			cout<<ans;	
		
		cout<<"\n";
		///uwu
	}
}
