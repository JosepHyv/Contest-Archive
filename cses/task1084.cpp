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

	cin>>n>>t>>k;
	int vx[n+2] = {0};
	int vy[t+2] = {0};
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	for(int d = 0 ; d<t; d++)
		cin>>vy[d];

	sort( vx, vx+n);
	sort( vy, vy+t);

	int i = 0;
	int ans = 0;
	bool free[MAXN] = {false};
	for(int c = 0 ; c<n; c++)
	{
		for(int d = i; d<t; d++)
		{
			if(vy[d] > vx[c]+k)
				break;
			if( !free[d] && vy[d] >= vx[c]-k  && vy[d] <= vx[c]+k)
			{
				ans++;
				free[d] = true;
				i = d;
				break;
			}
			if( vy[d] < vx[c]-k)
				i++;

		}
	}
	cout<<ans;
}
