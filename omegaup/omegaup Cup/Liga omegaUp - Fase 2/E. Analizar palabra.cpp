#include<iostream>
using namespace std;

string pal;
int vocal;

char vocales[] = {'a','e','i','o','u','A','E','I','O','U'};

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>pal;
	for(int c = 0; c<pal.size(); c++ ) 
	{
		 for(int d = 0; d<10; d++ ) 
		 		if( pal[c] == vocales[d] ) 
		 		{
					vocal++;
					break;
		 		}
	}

	cout<<pal.size()<<"\n"<<vocal<<"\n";
	for(int c = pal.size()-1; c>=0; c-- ) 
		cout<<pal[c];
}