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
constexpr int MAXN = 2e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 

int n;
int vx[MAXN];
int ans = 0 ;

void solve( int i, int f )
{
	if( i == f)
	{
		/// llegue a una hoja
		// o mejor dicho a un arreglo de tam 1 
		ans = 1;
		return ;
	}

	if( is_sorted(vx+i,vx+f+1) )
	{
		ans  = ( f - i )+1 ;
		return;
	}

	int mitad = ( i + f ) / 2;
	/// nos vamos a la izquierda
	solve(i,mitad);
	/// nos vamos a la derecha 
	solve( mitad+1, f);

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	cin>>n;
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];
	solve(0,n-1);
	cout<<ans;
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

