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

struct mari
{
	int num,tiem;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n;
	cin>>n;
	vector< mari > vx(n);
	stack< mari > trick;
	for( auto &v: vx)
		cin>>v.num;

	int ans = 0;

	for(int c = n-1; ~c; c--)
	{
		if(trick.empty())
		{
			trick.push(vx[c]);
			continue;
		}

		while( sz(trick) && trick.top().num < vx[c].num)
		{
			if( trick.top().tiem <= vx[c].tiem)
			{
				vx[c].tiem++;
				ans = max( ans, vx[c].tiem);
			}
			else
				vx[c].tiem = trick.top().tiem;
			ans = max( ans, vx[c].tiem);
			trick.pop();
		}
		trick.push(vx[c]);
	}


	cout<<ans;



}

