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

	int n, com;
	cin>>com>>n;
	queue < int > cl;

	while( n--)
	{
		char op;
		int x;
		cin>>op;
		if( op == 'N' )
		{
			cin>>x;
			cl.push(x+1);
		}
		if( op == 'A')
			if( sz(cl) ) 
			{
				com -= cl.front();
				cl.pop();
			}
		if( op == 'C')
			cout<<sz(cl)<<"\n";
		if( op == 'R')
			cout<<com<<"\n";
	}

}

