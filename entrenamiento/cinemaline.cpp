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

	int n;
	cin>>n;
	vector < int >  cambio(102);
	bool ok = true;
	while( n--)
	{
		int x;
		cin>>x;
		if( x == 25)
			cambio[x]++;
		else if( x == 50 )
		{
			cambio[x]++;
			if( cambio[25] )
				cambio[25]--;
			else
			{	
				ok = false;
				break;
			}
		}
		else if( x == 100)
		{
			cambio[x]++;
			if( cambio[50] && cambio[25])
			{
				cambio[50]--;
				cambio[25]--;
			}
			else if( cambio[25] >= 3)
			{
				cambio[25] -= 3;
			}
			else 
			{
				ok = false;
				break;
			}
		}

	}
	cout<<(ok ? "YES": "NO");
	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

