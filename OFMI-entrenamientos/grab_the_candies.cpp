#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int c = 0; c<t; c++)
	{
		int n, mia = 0, bianca = 0;
		cin>>n;
		int bolsita_por_persona;
		
		while(n-- > 0)
		{
			cin>>bolsita_por_persona;
			if(bolsita_por_persona % 2 == 0)
				mia += bolsita_por_persona;
			else 
				bianca += bolsita_por_persona;
		}
		if(mia > bianca)
			cout<<"yes";
		else 
			cout<<"no";
		cout<<'\n';
	}
}
