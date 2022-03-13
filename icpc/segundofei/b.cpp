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

queue < int > vx[100002];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n,m, k;
	cin>>m>>n>>k;
	while( k--)
	{
		char op;
		cin>>op;
		if( op == 'F')
		{
			int x,y;
			cin>>x>>y;
			vx[y].push(x);
		}
		else
		{
			int x;
			cin>>x;
			while( sz(vx[x]))
			{
				cout<<vx[x].front()<<"\n";
				vx[x].pop();
			}
		}
	}

}

