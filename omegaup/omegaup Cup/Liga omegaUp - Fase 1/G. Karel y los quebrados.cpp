#include<vector>
#include<string>
#include<iostream>
using namespace std;

int n;

vector< string > ans;

void solve(int n ) 
{
	double auxn = n;
	int sqare = n*n;
	for(int c = 1; c<=n; c++ ) 
	{
			long long int x = ( n +(sqare/c) ), y =(n+c); 
			if( (x*y) / (x+y) == n )
			{
				string aux = "1/";
				aux += to_string(n);
				aux += " = 1/";
				aux += to_string((n+(sqare/c)));
				aux += " + 1/";
				aux += to_string(n+c);
				ans.push_back ( aux);
			}
	}
}
main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	solve(n);
	cout<<ans.size()<<"\n";
	for(auto v:ans)
		cout<<v<<"\n";
}
