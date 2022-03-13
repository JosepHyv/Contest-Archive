#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 

ul lcm ( ul a, ul b )
{
	return (a*b) / __gcd(a,b);
}

bool existe( ul a )
{
	ul aux = a;
	while( aux)
	{
		if( aux % 10 && a % ( aux % 10))
			return false;
		aux /= 10;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int t;
	cin>>t;
	while(t--)
	{
		ul n;
		cin>>n;
		while( !existe(n))
			n++;
		//cerr<<"esto -> "<<n<<" "<<div<<" "<<n % div<<"\n";
		cout<<n;
		cout<<"\n";

	}	
	

	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

