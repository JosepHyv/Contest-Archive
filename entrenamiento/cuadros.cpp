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
bool vx[1002][1002];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin>>n;
	int one = 0 ;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<n; d++)
		{
			cin>>vx[c][d];
			if( !vx[c][d])
				one ++;
		}
	cout<<one<<"\n";
	int ans = 0 ;
	for(int c = 0; c<n; c++)
		for(int d = 0; d<n; d++)
		{
			for(int h = 2; h<=n; h++)
			{

				for(int i = c; i<c+h; i++)
					for(int j = d; )
				cout<<ans<<"\n";
				ans = 0 ;

			}
		}

	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

