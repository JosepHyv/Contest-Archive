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
constexpr ll inf = 1 << 30;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll mm[10][10] = {{0}};
	int n;
	for(int c = 1; c<=4; c++)
		for(int d = 1; d<=4; d++)
			cin>>mm[c][d];
	cin>>n;
	int vs[40][40] = {{0}};
	while( n--)
	{
		char a;
		int b;
		cin>>a>>b;
		int fil = a - ('A'-1);
		vs[fil][b]++;
	}
/*
	for(int c = 1; c<=4; c++ ) 
	{
		for(int d = 1; d<=4; d++)
			cout<<vs[c][d]<<" ";
		cout<<"\n";
	}
*/
	ll ans = 0 ;
	for(int c = 1; c<=4; c++ ) 
	{
		ll aux = 0 ;
		int cc = 0 ;
		int mini = inf;
		for(int d = 1; d<=4; d++)
			if(vs[c][d])
			{
				aux += (vs[c][d] * mm[c][d]);
				cc ++;
				mini = min( mini, vs[c][d]);
			}
		//cout<<aux<<" "<<c<<" -> "<<cc<<" "<<cc/4<<"\n";

		if( cc == 4)
			aux -= (mini*10);
		ans += aux;

	}

	cout<<ans;
	
}
