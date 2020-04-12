#include<iostream>
using namespace std;

int vx[102];
int n;
int x;

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	for(int c = 0; c<n; c++ ) 
		cin>>vx[c];
	for(int d = 0; d<n; d++)
	{
		cin>>x;
		cout<<x+vx[d]<<" ";
	}
}