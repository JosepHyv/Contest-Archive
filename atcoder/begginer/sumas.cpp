#include<iostream>
using namespace std;

int vx[1002];
int partial[1002];
int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int c = 0 ; c<=n; c++)
		cin>>vx[c];


	
	for(int c = 1; c<=n; c++)
	{
		int left = 0 ;
		for(int d = 0; d<c; d++)
			left += ((c - d) * vx[d]);
		int rigth = 0;
		for(int d = c+1; d<=n; d++)
			rigth += ((d - c) * vx[d]);
		if(left == rigth)
		{
			cout<<c<<" "<<left<<"\n";
			return 0;
		}
	}

	cout<<"-1 0\n";

}