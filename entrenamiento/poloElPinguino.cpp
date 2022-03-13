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

	int n,m,x;
	cin>>n>>m>>x;
	vector <int > arr(n*m);
	bool ok = true;
	set < int > coso;
	for(int c = 0 ; c<n*m; c++)
	{
		cin>>arr[c];
		coso.insert(arr[c] % x);
	}
	if( sz(coso) == 1  )
	{
		sort(all(arr));
		ll ans  = 0 ;
		int pos = arr[(n*m) / 2];
		for(int c = 0 ; c<n*m; c++)
			ans += abs(arr[c] - pos) / x;
		cout<<ans;


	}
	else cout<<-1;

	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

