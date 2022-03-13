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


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n,m,k;
	cin>>n>>m>>k;

	for(int c = 0; c<=9; c++)
	{
		if( ((n*10) + c )  % m   == 0 )
		{
			cout<<n<<c;
			for(int d = 0 ; d<k-1; d++)
				cout<<0;
			return 0;
		}
	}
	cout<<-1;
	cout<<"\n";

	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

