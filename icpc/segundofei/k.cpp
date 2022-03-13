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
	int n;
	cin>>n;
	vector< pair < int , int > > sol(n);
	stack < pair < int, int > > monotone;
	for( auto &v: sol)
		cin>>v.fi;

	int ans = 0;
	for(int c = n-1; c>= 0 ; c--)
	{
		if( !sz(monotone))
			monotone.push(sol[c]);
		else
		{
			while( !monotone.empty() && monotone.top().fi < sol[c].fi)
			{
				if( monotone.top().se <= sol[c].se)
				{
					monotone.pop();
					sol[c].se++;
					ans = max( ans, sol[c].se);
				}
				else
				{
					sol[c].se = monotone.top().se;
					monotone.pop();
				}
				ans = max( ans, sol[c].se);

			}
			monotone.push(sol[c]);
		}
	}

	cout<<ans;

}

