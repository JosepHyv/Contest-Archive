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
	vector< int > vx( n );
	for(int &a: vx)
		cin>>a;
	int x;
	cin>>x;
	for(int a: vx)
	{
		
		if(  !(a % x)  )
			cout<<a;
		else
			cout<<"X";
		cout<<" ";
	}
	cout<<"\n";
	
	///uwu - vrm 

}