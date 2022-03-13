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

	int n,m;
	string a,b;
	cin>>n>>a;
	cin>>m>>b;
	if( n != m)
	{
		cout<<"No";
		return 0;
	}
	int cont = 0 ;
	for(int c = 0; c<n; c++)
		if( a[c] != b[c])
			cont++;
	if( cont == 2 || cont == 0 )
		cout<<"Si";
	else cout<<"No";
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

