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
constexpr ll inf = 1ll << 30;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
		cin>>t;
	while(t--)
	{
	 	cin>>n;
	 	if( n % 2 == 0 )
	 		for(int c = 1; c<=n/2; c++)
	 			cout<<1;
	 	else
	 	{
	 		cout<<7;
	 		for(int c = 1; c<=(n/2)-1; c++)
	 			cout<<1;
	 	}
	 	cout<<"\n";



	}
}