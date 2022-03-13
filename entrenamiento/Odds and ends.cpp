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
	int n;
	int seg = 0 ;
	bool ok = true;
	int imp;
	pii base = {0,0};
	cin>>n;
	int vx[n+2] = {0};
	for(int c = 1 ; c<=n; c++)
		cin>>vx[c];
	// grande 
	if( n % 2 && vx[1] % 2 && vx[n] % 2)
		cout<<"Yes";
	else
		cout<<"No";

	
}