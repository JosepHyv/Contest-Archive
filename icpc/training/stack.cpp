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

	stack < pair < int , int > > ans;
	int n;
	cin>>n;
	vector < int >  solve(n);
	for(int c = 0; c<n; c++)
	{
		int x;
		cin>>x;
		while( !ans.empty() && ans.top().fi < x ) 
		{
			solve[ans.top().se] = x;
			ans.pop();
		}
		ans.push({x,c});
	}
	while(!ans.empty())
	{
		solve[ans.top().se] = -1;
		ans.pop();
	}

	for(auto v: solve)
		cout<<v<<" ";

	

}

