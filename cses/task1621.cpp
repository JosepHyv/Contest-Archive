#pragma GCC optimize ("-O3")
#pragma GCC optimize ("unroll-loops")
#include<set>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>
#include<stdio.h>
#include<climits>
#include<cstdlib>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#define f first 
#define s second
#define all(x) x.begin() , x.end()
#define mcm(a,b) a*b/__gcd(a,b);
#define pb(x) push_back(x)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair< ll, ll > pll;
typedef pair< int , int > pii;
const ll mod = 1e9+7;
const ll MAXN = 1e6+3;
const ll inf = (1ll << 32 );
const ll ninf = (-1ll << 32);

int  t,n,k;

void solve()
{
	
	return;
}

int main()
{
	
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	
	cin>>t;
	ll vx[t+1] = {0};
	for(int c = 0 ; c<t; c++)
		cin>>vx[c];
	sort(vx,vx+t);
	ll ant = vx[0];
	ll ans = 1;
	for(int c = 1; c<t; c++)
		if( vx[c] != ant ) 
		{
			ans ++;
			ant = vx[c];
		}

	cout<<ans;
		

}
