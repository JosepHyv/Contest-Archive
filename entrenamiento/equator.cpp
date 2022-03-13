//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb(x) push_back(x)
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
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vi vx(n+2);
	int med = 0 ;

	for(int c =1; c<=n; c++ )
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}
	if( vx[n] % 2 == 0 )
		med = vx[n] / 2;
	else
		med = vx[n]/2 +1;
	for(int c = 1; c<=n; c++)
		if(vx[c] >= med)
		{
			cout<<c;
			return 0;
		}



	
}