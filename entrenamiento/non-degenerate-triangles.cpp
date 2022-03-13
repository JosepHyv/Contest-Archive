//PROBLEM LINK:https://codeforces.com/problemset/problem/766/B
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
constexpr ll inf = 1 << 30;

int n;
int vx[MAXN];

bool check(ll a, ll b, ll c)
{
	if( a+ b <= c)
		return false;
	if( a + c <= b)
		return false;
	if( c+b <= a)
		return false;
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	sort(vx,vx+n);
	bool ok = false;
	if( n > 3)
	{
		for(int c = 0 ;c<n; c++)
		{
			if( check(vx[c], vx[c+1], vx[c+2]))
			{
				ok = true;
				break;
			}
		}
	}
	else if( check(vx[0], vx[1], vx[2])) ok = true;
	
	cout<<(ok? "YES": "NO");
}