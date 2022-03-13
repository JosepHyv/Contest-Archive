#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int t;
	cin>>t;
	while( t--)
	{
		ll n;
		cin>>n;
		ll ans1 =( n * ( n+1)) / 2;
		ll ans2 = 0 ;
		n-= 1;

		while( n--)
		{
			ll x;
			cin>>x;
			ans2+=x;
		}

		cout<<ans1 - ans2<<"\n";

	}

	return 0;

}

