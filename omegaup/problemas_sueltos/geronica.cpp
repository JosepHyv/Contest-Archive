#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector< int > vx(n);
	vector < int > copia;
	for(int &a: vx)
		cin>>a;
	copia = vx;
	sort(all(copia));
	int ans = 0 ;
	for(int c = 0 ; c<n; c++)
		if( copia[c] != vx[c])
			ans++;
	cout<<ans+1;
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/