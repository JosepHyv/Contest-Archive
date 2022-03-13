#include<iostream>
using namespace std;

int voto;
int n,p;
int cont;
int cubeta[102];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>p>>n;
	for(int c = 0; c<n; c++)
	{
		cin>>voto;
		cubeta[ voto ]++; /// la cubeta cuenta los profesores
	}

	/// me imprime la respuesta 
	for(int profesores = 1; profesores <= p; profesores++)
		cout<<profesores<<"-"<<cubeta[profesores]<<"\n";

	//controla que profesor voy a buscar

	
}