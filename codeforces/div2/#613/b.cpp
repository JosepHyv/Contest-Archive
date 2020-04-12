#include<climits>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int n,t;
ll allcost;
ll pmax;
ll maxi = 0;

ll maxRange( ll a[], int i, int f)
{
	ll maxi = 0;
	ll auxmax = INT_MIN;
	for(int c = i; c<=f; c++)
	{
		if( a[c] > (maxi + a[c] )  )
			maxi = a[c];
		else
			maxi += a[c];
		auxmax = max( maxi, auxmax);
	}
	return max(maxi,auxmax);
}


main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>t;
	for(int h = 0; h<t; h++)
	{
		cin>>n;
		ll vx[n+2] = {0};
		allcost = 0;
		pmax = INT_MIN;
		for(int d = 1; d<=n; d++ ) 
		{
			cin>>vx[d];
			allcost += vx[d];
			pmax = max(pmax, vx[d]);
			//vx[d] += vx[d-1];
		}
		if( allcost <= pmax)
		{
			cout<<"NO\n";
			continue;
		}
		else
		{
			ll range_max = 0;
			range_max = maxRange(vx,1,n-1);
			if( range_max >= allcost)
			{
				cout<<"NO\n";
				continue;
			}
			else
			{

				range_max = maxRange(vx,2,n);
				if( range_max >= allcost)
				{
					cout<<"NO\n";	
					continue;
				}
			}
			if( allcost > range_max)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			

			/*for(int c = 2; c<n; c++)
				for(int d = c; d<=n; d++)
					range_max = max( range_max, (vx[d]- vx[(d-c)]));*/
			//cout<<range_max<<" "<<allcost<<"\n";	


		}


	}
}