/*
ID: sonnyak1
LANG: C++14
TASK: numtri
*/
#include<iostream>
#include<fstream>
#include<utility>
#include<algorithm>
/*#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()*/
using namespace std;

typedef long long int ll;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 1e9;

int n,m;
int dp[1002][1002];
int mm[1002][1002];

int ans( int x, int y)
{
	if( x > n || y > x)
		return -inf;
	//cout<<x<<" "<<y<<" "<<mm[x][y]<<"\n";
	if( x == n)
		return mm[x][y];
	if( dp[x][y] )
		return dp[x][y] ;
	return dp[x][y] = mm[x][y] + max({ ans(x+1,y), ans(x+1,y+1)});
}


int main()
{
	
	ifstream fin ("numtri.in");
	ofstream fout ("numtri.out");
	fin>>n;
	for(int c = 1 ; c<=n; c++)
		for(int d = 1 ; d<=c; d++)
			fin>>mm[c][d];
	/*for(int c = 0 ; c<n; c++)
	{
		for(int d = 0 ; d<c; d++)
			cout<<dp[c][d]<<" ";
		cout<<"\n";
	}*/
	fout<<ans(1,1)<<"\n";
	//fout.close();
	return 0;

}

