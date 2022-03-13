#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D
	int n;
	cin>>n;
	while( n < 100 ) 
	{
		if( n % 2 )
			n *= 2 ;
		else n += 3;
	}
	cout<<n;
	cout<<"\n";	
	///uwu - vrm 
	

}