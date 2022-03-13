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
set < ll > ans;
bool primos( ll x)
{
	for(ll c = 2; c*c <= x; c++)
		if( x % c == 0 )
			return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ans.insert(4);
	for(int c = 3; c<=1000000; c+=2)
		if( primos(c))
			ans.insert((ll)c*c);
	int n;
	cin>>n;
	while( n--)
	{

		ll x;
		cin>>x;
		if( ans.find(x) != ans.end())
			cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

