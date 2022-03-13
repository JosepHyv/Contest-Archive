#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	map < int , int > contador;
	int n;
	cin>>n;
	while( n--)
	{
		char op;
		int m;
		cin>>op>>m;
		if( op == 'A')
			contador[m]++;
		else
		{
			//// si existe en el mapa
			if( contador.find(m) != contador.end())
				cout<<contador[m]<<"\n";
			else 
				cout<<0<<"\n";
		}
	}
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

