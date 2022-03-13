#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int cc[(int)1e6];
int cc2[(int)1e6];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D
	int n;
	cin>>n;
	vector < int > arr(n);
	int maxi = 0 ;
	for( int &a: arr)
	{
		cin>>a;
		cc[a]++;
		maxi = max( maxi, cc[a]);
	}

	int numero = 0 ;
	for( int a: arr)
	{
		cc2[a]++;
		if( cc2[a] == maxi)
		{
			numero = a;
			break;
		}
	}
	cout<<maxi<<" "<<numero;


	cout<<"\n";	
	///uwu - vrm 

	

}