/*
ID: sonnyak1
LANG: C++14
TASK: 
*/
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int ans[MAXN];
int maxi = -inf;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/

	int n,m;
	cin>>n;
	vi vx(n);
	for( auto &v: vx) cin>>v;
	cin>>m;
	vi vy(m);
	for( auto &v: vy) cin>>v;

	for(auto i: vx)
		for(auto j: vy)
		{
			if(!( j % i ))
			{
				maxi = max( maxi, j/i);
				ans[j / i]++;
			}
		}

	/*for(int c = 0 ; c<=maxi; c++ ) 
		cout<<ans[c]<<" ";*/
	cout<<ans[maxi];

}

