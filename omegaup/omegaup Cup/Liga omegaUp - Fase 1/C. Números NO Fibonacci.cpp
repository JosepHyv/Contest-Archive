#include<map>
#include<iostream>
using namespace std;


typedef unsigned long long int LL;

map< LL, bool > vs;

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	LL ant = 0, ante = 1;
	for(int c = 1; c<=100; c++ ) 
	{
		
		LL sum = (ante + ant ) ;
//		cout<<sum<<" ";
		vs[sum] = true;
		LL aux = ante;
		ante = sum;
		ant = aux;
	}
	int n;
	cin>>n;
	for(int c = 1; c<n; c++)
		if( !vs[c] ) 
			cout<<c<<" ";
}
