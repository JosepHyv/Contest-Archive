#include<iostream>
using namespace std;

int n;
int x;
int z;

main()
{
	cin>>n>>x;
	int ans = 0;
	for(int c = 0; c<n; c++ ) 
	{
		cin>>z;
		if( z == x ) 
			ans++;
	}
	cout<<ans;
}