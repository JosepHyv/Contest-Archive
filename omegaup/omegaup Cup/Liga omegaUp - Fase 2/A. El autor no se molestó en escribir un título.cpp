#include<map>
#include<cmath>
#include<iostream>
using namespace std;

typedef unsigned long long int LL;
//const int MAXM = sqrt(1e18);
LL  n,m;
int one, cero;

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n>>m;
	for(LL c = 2; c<=sqrt(n); c++ ) 
	{
		if( n % c == 1) 
			one ++;
		if( n % c == 0 )
			cero ++;
		if( one >1 || cero >1)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Si";
}