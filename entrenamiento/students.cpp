//PROBLEM LINK:https://codeforces.com/contest/962/problem/B
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb(x) push_back(x)
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

	string ori;
	int n,a,b, aux;
	cin>>n>>a>>b;
	cin>>ori;
	vi vx;
	int leng = 0;
	for(int c = 0; c<ori.size(); c++)
		if( ori[c] == '*')
		{
			if(leng > 0)
				vx.pb(leng);
			leng = 0;
		}
		else
			leng++;
	vx.pb(leng);
	greater < int > com;
	sort(all(vx), com);
	int ans = 0 ;
	for(int v:vx)
	{
		if( !a && ! b )
			break;
		if( v == 1)
		{
			if( a > b && a  > 0 ) 
				ans++, a--;
			else if( b > 0 )
				ans ++, b--;
		}
		else
		{
			if(  v % 2 == 0 )
			{
				int mid = v / 2;
				if( a >= mid)
				{
					ans += mid;
					a -= mid;
				}
				else if( a > 0)
					ans += a , a = 0;
				if( b >= mid )
				{
					ans += mid;
					b -= mid;
				}
				else if( b > 0 )
					ans += b, b = 0;
			}
			else
			{
				int mid = v / 2;
				int med = mid+1;
				if( a >= b && a > 0 )
				{
					if( a >= med ) 
					{
						ans += med;
						a -= med;
					}
					else
						ans += a, a = 0;

					if( b >= mid )
					{
						ans += mid;
						b -= mid;
					}
					else if ( b > 0)
						ans += b, b = 0;
				}
				else if ( b > 0 )
				{
					if( b >= med)
					{
						ans += med;
						b -= med;
					}
					else
						ans += b, b = 0 ;
					if( a >= mid ) 
					{
						ans += mid;
						a -= mid;
					}
					else if( a > 0 )
						ans += a, a = 0 ;

				}


			}
		}
	}
	cout<<ans;
}