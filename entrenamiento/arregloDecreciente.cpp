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
	vector < int > vx(n), ori(n);
	int tam = 0 , cc = 1 ;
	cin>>vx[0];
	ori[0] = vx[0];
	int decreciente = 0 ;
	for(int c = 1; c<n; c++)
	{
		cin>>vx[c];
		ori[c] = vx[c];
		if( vx[c] < vx[c-1]) cc++;
		else
		{
			tam = max( tam, cc);
			cc = 1;
		}
		if( cc == 2 )
			decreciente ++;

	}
	tam  = max( tam, cc);
	sort(all(vx));
	int aux = 0 ;
	int pos = -1 ;
	for(int c = 0 ; c<n; c++)
	{
		//cerr<<ori[c]<<" "<<vx[c]<<"\n";
		if( ori[c] != vx[c])
		{
			if( pos == -1 ) 
				pos = c+1 ;
			aux++;
		}
	}
	if( decreciente > 1 )
		cout<<"no";
	else
	if( tam == n )
		cout<<"yes\n"<<1<<" "<<n;
	else if( aux > tam )
		cout<<"no";
	else if( aux == 0 ) cout<<"yes\n"<<n<<" "<<n;
	else cout<<"yes\n"<<pos<<" "<<pos+tam-1;
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

