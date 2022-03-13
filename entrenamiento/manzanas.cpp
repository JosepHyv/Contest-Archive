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
	cin>>n;
	vector < int > vx(n);
	int sum = 0 ;
	for(int c = 0 ; c<n; c++)
	{
		cin>>vx[c];
		sum += vx[c];
	}
	int mitad = (sum / 2 );
	if( mitad %100 || n == 1 )
		cout<<"NO";
	else
	{
		sort(all( vx));
		int f = n-1;
		int i = 0;
		sum = 0 ;
		for(; f>=0; f--)
		{
			if( sum == mitad )
				break;
			if( sum + vx[f] <= mitad)
				sum += vx[f];
		}
		
		if( sum != mitad)
			cout<<"NO";
		else cout<<"YES";
	}

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/