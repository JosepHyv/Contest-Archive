#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
#define press(x)  setprecision(x)<<fixed
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;

bool check( int x)
{
	while( x)
	{
		if( x % 10 != 4 && x % 10 != 7 )
			return false;
		x /= 10 ;
	}
	return true;
}

bool solve ( int a)
{
	for(int c = 1; c<=a; c++)
		if( check( c)  && !( a % c))
			return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n;
	cin>>n;
	cout<<(solve(n)? "YES": "NO");

}

