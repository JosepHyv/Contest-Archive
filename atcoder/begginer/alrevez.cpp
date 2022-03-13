#include<iostream>
using namespace std;

int n;
int maxima;
int numero;

int main()
{
	cin>>n>>maxima;
	for(int c = 0; c<n-1; c++)
	{
		cin>>numero;
		if(numero > maxima)
			maxima = numero;
	}
	cout<<maxima;
}