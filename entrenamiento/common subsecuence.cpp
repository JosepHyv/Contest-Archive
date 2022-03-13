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
constexpr ll inf = 1ll << 30;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;
	while( t--)
	{
		bool ls[MAXN] = {false};
		int n,m;
		cin>>n>>m;
		bool ok = false;
		int h = -inf;
		while( n--)
		{
			int x;
			cin>>x;
			ls[x] = true;

		}

		while(m--)
		{
			int x;
			cin>>x;
			if(ls[x] && ! ok ) 
			{
				ok = true;
				h = x;
			}
		}
		if( ok)
			cout<<"YES\n"<<1<<" "<<h<<"\n";
		else
			cout<<"NO\n";
	}
	
}