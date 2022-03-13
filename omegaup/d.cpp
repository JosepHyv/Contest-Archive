//https://omegaup.com/arena/problem/Simulador-de-cajero-automatico/#problems
#pragma optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll inf = 1 << 31;

ll n,m,k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*no se supone que este es un lugar de programacion competitiva ? */
	ll saldo = 1000;
	char op = 0;
	while( cin >> op)
	{
		ll aux = 0 ;
		if( op == 'S')
			return 0;
		if( op == 'D')
		{
			cin>>aux;
			saldo += aux;
		}
		if( op == 'R')
		{
			cin>>aux;
			saldo -= aux;
		}
		if( op == 'C')
			cout<<"$"<<saldo<<"\n";

	}
	
}
