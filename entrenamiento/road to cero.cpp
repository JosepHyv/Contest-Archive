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
	int t;
	cin>>t;
	while(t--)
	{
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		ll op1 = 0, op2 = 0 , op3 = 0 ;
		op1 = ( x+y)*a;
		op2 = (( max(x,y) - min(x,y))*a) + (min(x,y) * b);
		op3 = (b * max(x,y)) + ( a * min(x,y));
		cout<<min({op1,op2,op3})<<"\n";
	}
}