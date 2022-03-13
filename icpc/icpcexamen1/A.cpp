#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
#define press(x)  setprecision(x)<<fixed
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n,k;
	cin>>n>>k;
	vector < set < int > > vx(n+1);
	map< pair < int, int > , int > conta;
	while( k--)
	{
		char op;
		cin>>op;
		if(op == 'R')
		{
			int x,y;
			cin>>x>>y;
			vx[x].insert(y);
			conta[{x,y}]++;
		}
		if( op == 'Q' ) 
		{
			int x;
			cin>>x;
			if( vx[x].size() > 1)
				cout<<"Multiple\n";
			else if( vx[x].size())
					cout<<*vx[x].begin()<<"\n";
				else
					cout<<"No info\n";

			/* este es el arreglo :0 */
			/*cout<<"-----\n";
			for(auto v: vx[x])
			{
				cout<<v<<" ";
			}
			cout<<"\n-----\n";*/

		}
		if( op == 'B')
		{
			int maximo = 0;
			pair < int, int > ans;
			for(auto v: conta)
			{
				if( maximo < v.second)
				{
					maximo = v.second;
					ans = v.first;
				}
			}
			int cont = 0 ;
			for( auto v: conta)
			{
				if( cont > 1 )
					break;
				if( v.second  == cont )
					cont++;
			}
			if( cont > 1)
				cout<<"Multiple\n";
			else
				cout<<ans.fi<<" "<<ans.se<<"\n";

		}
	}


}

