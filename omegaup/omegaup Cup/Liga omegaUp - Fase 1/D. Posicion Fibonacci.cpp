#include<climits>
#include<map>
#include<iostream>
using namespace std;


typedef unsigned long long int LL;

map< LL, int > vs;

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	LL ant = 0, ante = 1;
	for(int c = 1; c<=100; c++ ) 
	{
		
		LL sum = (ante + ant ) ;
		vs[sum] = c+1;
		LL aux = ante;
		ante = sum;
		ant = aux;
	}
	LL n;
	cin>>n;
	if( n == 1 ) 
		cout<<1;
	else
	if(vs.find(n) != vs.end() ) 
		cout<<vs[n];
	else
		cout<<-1;
	/*for( map <LL, int > :: iterator it = vs.begin(); it != vs.end(); it++ ) 
		cout<<it -> first <<" "<< it -> second<<"\n";*/
}
