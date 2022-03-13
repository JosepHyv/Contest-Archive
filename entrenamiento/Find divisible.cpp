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
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1ll << 32;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t,l,r;
	cin>>t;
	while( t--)
	{
		cin>>l>>r;
		if( r % l == 0) 
			cout<<l<<" "<<r<<"\n";
		else
		if( r > 2*l)
			cout<<l<<" "<<2*l<<"\n";
		else
			cout<<r/2<<" "<<(r/2)*2<<"\n";
	}
	
}