#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int lld;
typedef long double ld;

int calcula(vector < vector < string > > vx, set< string > data)
{
	int ans = 0;
	for(auto vec: vx)
	{
		bool ok = true;
		for(string a: vec)
			if(a == no)
			{
				ok = false;
				break;
			}
		if(ok) ans++;
	}
	return ans;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;

	int n;
	cin>>n;
	set < string > pizzaBase, nogusto;
	vector < vector < string > > persona(n);
	int pos = 0 ;
	while(n--)
	{
		int x;
		cin>>x;
		while(x--)
		{
			string ingrediente;
			cin>>ingrediente;
			pizzaBase.insert(ingrediente);
			persona[pos].push_back(ingrediente);
		}
		pos++;
		cin>>x;
		while(x--)
		{
			string ingre;
			cin>>ingre;
			nogusto.insert(ingre);
		}
	}

	for(auto a: nogusto)
		if(pizzaBase.find(a) != pizzaBase.end())
			pizzaBase.erase(pizzaBase.find(a));
	
	int clientes = 0;
	for(auto vec: persona)
	{
		bool ok = true;
		for(string a: vec)
		{
			if(pizzaBase.find(a) == pizzaBase.end())
			{
				ok = false;
				break;
			}
		}
		if(ok) clientes++;
	}
	cout<<clientes<<"\n";

	for(string a: nogusto)
	{
		int tempo = calcula(persona, a);
		if(clientes < tempo)
		{
			clientes = tempo;
			pizzaBase.insert(a);
		}
	}

//	cout<<clientes<<"\n";
	cout<<pizzaBase.size()<<" ";
	for(string a: pizzaBase)
		cout<<a<<" ";

o

	//cout<<"\n";
}