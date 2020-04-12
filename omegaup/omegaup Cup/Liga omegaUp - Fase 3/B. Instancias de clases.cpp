// no solved problem
// only math observations
#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
main()
{
	cin>>n>>m;
	if( m == 0)
		cout<<n;
	else
		cout<<abs(n-m)+1;
}
