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

ll cuenta[300];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n,m;
	ul ans = 0 ;
	cin>>n>>m;
	while( n--)
	{
		char x;
		cin>>x;
		cuenta[x]++;
	}
	vector < int > vx(26);
	for(int c = 'A'; c<='Z'; c++)
		vx[c -'A'] = cuenta[c];
	sort(all(vx));
	for(int c = sz(vx)-1; c>=0 && m; c--)
	{
		
		ul aux = 0 ;
		if( vx[c] > m )
		{
			aux = m;
			m = 0 ;
		}
		else
		{
			aux = vx[c];
			m -= vx[c];
		}
		ans += ( aux * aux );
	}
	cout<<ans;

	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

