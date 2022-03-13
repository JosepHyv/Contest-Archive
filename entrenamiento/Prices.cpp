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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll vx[n+2],prem[5] = {0};
	for(int c = 1; c<=n; c++)
		cin>>vx[c];
	for(int c = 1; c<=5; c++)
		cin>>prem[c];
	ll resto = 0;
	ll vs[7] = {0};
	for(int c = 1; c<=n; c++)
	{
		resto += vx[c];
		for(int d = 5; d>=1; d--)
			if( resto >= prem[d] )
			{
				vs[d] += resto / prem[d];
				resto %= prem[d];
			}
	}
	for(int c = 1; c<=5; c++)
		cout<<vs[c]<<" ";
	cout<<"\n"<<resto;

	
}