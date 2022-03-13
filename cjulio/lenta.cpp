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
	cin>>n;
	int vx[n+2] = {0};
	ll sli[n+2] = {0};
	for(int c = 1; c<n; c++)
		cin>>vx[c];

	for(int c = n-1; c>0; c--)
		vx[c] += vx[c+1];

	/*for(int c = 1; c<=n; c++)
		cout<<vx[c]<<" ";

	cout<<"\n";*/

	for(int c = 1; c<=n; c++ ) 
	{

		for(int d = c; d>=1; d--)
		{
			if( c != d)
			{
				if( abs(vx[c] - vx[d]) < 150)
					sli[c]++;
				else
					break;

			}
		}
		for(int d = c; d<=n; d++)
		{
			if( c!= d)
			{
				if( abs( vx[c] - vx[d]) < 150)
					sli[c]++;
				else
					break;
			}
		}
		
	}

	for(int c = 1; c<=n; c++ ) 
		cout<<sli[c]<<" ";

}
