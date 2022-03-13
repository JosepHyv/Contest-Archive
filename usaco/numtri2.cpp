/*
ID: sonnyak1
LANG: C++11
TASK: numtri2
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

int n,m;
ll dp[1002][1002];
ll mm[1002][1002];

ll ans( int x, int y)
{
	if( x < 0 || x >= n || y < 0 || y > x)
		return 0;
	if( dp[x][y] )
		return dp[x][y];
	if( x == n)
		return mm[x][y];
	return dp[x][y] += mm[x][y] +  max({ ans(x+1,y-1), ans(x+1,y), ans(x+1,y+1)});
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ifstream fin ("numtri.in");
	ofstream fout ("numtri.out");
	fin>>n;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<c; d++)
			fin>>mm[c][d];
	fout<<ans(0,0);

}

