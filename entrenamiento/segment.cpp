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

ll st[4*MAXN];

int maxi = - inf;
int build( int nd, int i, int f )
{
	//maxi = max( maxi, nd);
	if( i == f)
	{
		cin>>st[nd];
		return st[nd];
	}
	int med = ( i + f ) / 2;
	int lf = build( 2 * nd, i, med);
	int dr = build( 2 * nd+1, med+1, f);
	return st[nd] = max( lf, dr);

}

int query( int nd, int i, int f , int li, int ld)
{
	if( i > ld || f < li )
		return -inf;
	if( i >= li && f <= ld)
		return st[nd];
	int med = ( f + i ) / 2;
	return max( query(2*nd, i, med, li, ld), query(2*nd+1, med+1, f, li, ld));
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n, k;
	cin>>n>>k;
	build(1,1,n);
	int it = 1;
	for(int c = 1; c<=n; c++)
	{
		while( c - it >= k)
			it++;
		cout<<query(1,1,n,it,c)<<" ";

	}

}
