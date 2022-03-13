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
char pos[16][16];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	for(int c = 0; c<16; c++)
		for(int d = 0 ; d<16; d++)
			pos[c][d] = 0;
	for(int c = 2 ; c<=5; c++)
		for(int d = 2 ; d<=5; d++)
			cin>>pos[c][d];
	bool ok = false;
	for(int c = 2; c<=5; c++)
	{
		for(int d = 2 ; d<=5; d++)
		{
			int aux;
			aux = 0;
			for(int x = c; x<=c+1; x++)
				for(int y = d; y<=d+1; y++)
					aux += (pos[x][y] && pos[x][y] == pos[c][d]);
			if( aux  >= 3 )
			{
				ok = true;
				break;
			}



		}
	}
	
	cout<<(ok ? "YES":"NO");

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

