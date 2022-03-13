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
		if( n == 2 )
		{
			cout<<-1<<"\n";
		}
		else
		{
			int pos = 1;
			for(int c = 0 ; c<n; c++)
			{
				for(int d = 0; d<n; d++)
				{
					cout<<pos<<" ";
					pos += 2;
					if( pos > n*n)
						pos = 2;
				}
				cout<<"\n";
			}
		}

		//cout<<"\n";
		///uwu - vrm 

	}
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/