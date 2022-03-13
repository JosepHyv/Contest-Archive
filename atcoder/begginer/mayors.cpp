#include<iostream>
using namespace std;

int vx[12];
int maxi;
int posR;

int main()
{
	cin>>maxi;
	for(int c = 1; c<10; c++)
	{
		int x;
		cin>>x;
		if( x > maxi)
		{
			maxi = x;
			posR = c;
		}
		cout<<"Evaluando la posicion  "<<c<<" -> "<<x<<" "<<maxi<<" "<<posR<<"\n";
	}
	cout<<maxi<<" "<<posR;

}