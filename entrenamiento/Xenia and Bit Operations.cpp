//PROBLEM LINK:
//PROBLEM PATH:
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

ll st[4*MAXN];
ll vx[MAXN];
int n,m;

ll build(int nd, int i, int f)
{
	if( i == f )
		return st[nd] = vx[i];
	int mm = (i+f)/2;
	return st[nd] = (build(2*nd, i, mm) ^ build(2*nd+1, mm+1, f));
}

ll query( int nd, int i, int f, int li, int ld)
{
	if( i > ld || f < li )
		return 0;
	if( i >= li && f <= ld)
		return st[nd];
	int mm = (i+f)/2;
	return (query(2*nd, i, mm, li, ld) ^ query(2*nd+1, mm+1, f, li, ld));
}

void show (  int nd, int i, int f)
{
	if( i == f )
	{
		cout<<st[nd]<<" "<<nd<<" "<<i<<" "<<f<<"\n";
		return;
	}
	cout<<st[nd]<<" "<<nd<<" "<<i<<" "<<f<<"\n";
	int mm = ( i+f) / 2;
	show(2*nd, i, mm );
	show(2*nd+1, mm+1, f);
	return;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int c = 1; c<=( 1 << n ); c++ )
		cin>>vx[c];
	build(1,1,(1 << n ));
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		cout<<query(1,1,( 1 << n),x,y)<<"\n";
	}

	show(1,1,(1 << n ));
}