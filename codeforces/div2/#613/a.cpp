#include<iostream>
using namespace std;

string a;
int n;

int abss( int k)
{
	if( k < 0)
		return -k;
	return k;
}

int l = 0,r = 0;

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	cin>>a;
	for(int c = 0; c<n; c++)
	{
		if( a[c] == 'L')
			l--;
		else
			r++;
	}
	cout<< abss((l - r) )+1;
}