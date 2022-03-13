#include<bits/stdc++.h>
using namespace std;

int k,n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	while( cin>>k>>n )
	{
		if( !k && !n )
			return 0;
		int ans = 0;
		vector < bool > vs(1002);
		while( n--)
		{
			int x;
			cin>>x;
			for(int c = 1; c<=k; c++)
			{
				if(	c % x  == 0  && !vs[c])
				{
					vs[c] = true;
					ans++;
				}
			}

		}
		/*
		for(int c = 1; c<=k; c++)
		{
			cout<<c<<" -> "<<vs[c]<<"\n";
		}*/

		cout<<ans<<"\n";


	}

	return 0;

}