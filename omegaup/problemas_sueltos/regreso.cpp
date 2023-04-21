#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;

int pos(char a , char *ars)
{
	for(int c = 0; c<5; c++)
		if( ars[c] == a)
			return c;
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char vocales[] = "aeiou";

	//ready ? :D
	string t;
	char a;
	cin>>t>>a;
	if( t == "MrKristarlx07")
		cout<<"Bubblesort para todos";
	else
	{
		if( a == 'A')
		{
			for( char &x : t)
				x = tolower(x);
			cout<<t<<"\n"<<t;
		}
		if( a == 'B')
		{
			for( char &x: t)
				x = tolower(x);
			cout<<t<<"\n";
			reverse(t.begin(), t.end());
			cout<<t;
		}

		if( a == 'C')
		{
			for( char &x: t)
				x = tolower(x);
			cout<<t<<"\n";
			for( char &x: t)
			{
				int aux = pos(x,vocales);
				if( aux != -1)
				{
					x = vocales[(aux+1) % 5];
				}
			}
			cout<<t;

		}

	}
	cout<<"\n";
	
	///uwu - vrm 
}