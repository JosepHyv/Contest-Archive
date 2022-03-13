#include<math.h>
#include<vector>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D

	double a;
	cin>>a;
	double p1 = ((a + pow(a,2)) / ( (5*a) + 3))+a;

	double p2 = ((p1 - a) / (( p1 - a ) + ( 2 * a)));
	cout<<p1 * p2;
	cout<<"\n";	
	///uwu - vrm 
	

}