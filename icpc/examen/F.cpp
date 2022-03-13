#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll ansx = 1 , ansy = 1 ;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n, frijoles;
	cin>>n>>frijoles;

	if( frijoles == n*n ) 
	{
		if( n % 2 )
			cout<<( n / 2 )+1<<" "<<(n / 2 )+1<<"\n";
		else
			cout<<n-1<<" "<<n/2<<"\n";
		return 0;
	}

	ll iz = 1, der = n;
	ll arr = 1, aba = n; /// arriba abajo
	while( frijoles > 0 )
	{

		if( frijoles >= abs(der - iz)+1)
		{
			frijoles -= abs(der - iz)+1;
			ansy += (der - iz);
			arr++;
		}
		else
		{
			ansy = frijoles;
			frijoles = 0 ;
		}
		if( frijoles <=0 )
			break;
		
		if( frijoles >= abs( arr - aba)+1)
		{
			frijoles -= abs( arr - aba)+1;
			ansx += abs( arr - aba);
			der--;
		}
		else
		{
			ansx = frijoles-1;
			frijoles = 0 ;
		}
		if( frijoles <= 0 )
			break;
		//// ---------------------
		if( frijoles >= abs(der - iz)+1)
		{
			frijoles -= abs(der - iz)+1;
			ansy -= abs(der - iz);
			aba--;
		}
		else
		{
			ansy = der-frijoles+1;
			frijoles = 0 ;
		}
		if( frijoles <=0 )
			break;
		
		if( frijoles >= abs( arr - aba)+1)
		{
			frijoles -= abs( arr - aba)+1;
			ansx -= abs( arr - aba)+1;
			iz++;
		}
		else
		{
			ansx = aba - frijoles+1;
			frijoles = 0 ;
		}
		if( frijoles <= 0 )
			break;


	}
	cout<<ansx<<" "<<ansy;


}