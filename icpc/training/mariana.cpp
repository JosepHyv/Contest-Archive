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

struct k
{
	int num;
	int pos;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/

	int t;
	cin>>t;
	while( t--)
	{
		int n;
		cin>>n;
		vector < int > casa(n);
		vector < ll > contador(MAXN);
		vector < int > solve(n, -1);
		for( auto &v: casa)
		{
			cin>>v;
			contador[v]++;
		}	

		stack < k > pl;
		for(int c = 0 ; c<n; c++)
		{
			auto v = casa[c];
			while(pl.size() && contador[pl.top().num] < contador[v] )
			{
				solve[pl.top().pos] = v;
				pl.pop();
			}
			pl.push({v,c});
		}

		for( auto v: solve)
			cout<<v<<" ";

		cout<<"\n";
	}

}

