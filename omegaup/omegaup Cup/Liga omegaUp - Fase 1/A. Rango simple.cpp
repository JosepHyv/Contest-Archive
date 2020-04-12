#include<iostream>
#include<algorithm>
using namespace std;

int n,a,b;
int vx[1002];

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin>>n;
	for(int c = 1; c<=n; c++ ) 
		cin>>vx[c];
	cin>>a>>b;
	sort(vx,vx+n+1);
	int it1 = 0,it2 = 0;
	for(int c = 1; c<=n; c++ ) 
		if(vx[c] >= min(a,b) ) 
		{
			it1 = c;
			break;
		}
	for(int d = n; d>=0; d-- ) 
		if( vx[d] <= max(a,b) ) 
		{
			it2 = d;
			break;
		}
	cout<<(it2 - it1 ) +1;
}