#include<vector>
#include<string>
#include<iostream>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

int n;

vector< string > ans;

void solve(int n ) 
{
	long double auxn = n;
	ull sqare = n*n;
	for(ull c = 1; c<=n; c++ ) 
	{
			ull x = ( n +(sqare/c) ), y =(n+c); 
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
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	solve(n);
	cout<<ans.size()<<"\n";
	for(auto v:ans)
		cout<<v<<"\n";
}