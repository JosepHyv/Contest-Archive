#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
typedef unsigned long long int ull;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int mm[n+2][n+2] = {{0}};
	int cc = 1 ;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<n; d++)
			mm[c][d] = cc++;
	while(m--)
	{
		char a;
		int x,y,i;
		cin>>a;
		if( a == 'R')
		{
			cin>>x>>y>>i;
			for(int c = y, d = i; c <= (y+i)/2; c++,d--)
				swap(mm[c][x], mm[d][x]);
		}
		else
		{
			cin>>x>>y;
			cout<<mm[x][y]<<"\n";
		}
	}

	/*for(int c = 0 ; c<n; c++)
	{
		for(int d = 0 ; d<n; d++)
			cout<<mm[c][d]<<" ";
		cout<<"\n";
	}*/
	
}
