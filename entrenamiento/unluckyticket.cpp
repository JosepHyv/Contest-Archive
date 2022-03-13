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
	//string a;
	cin>>n;
	bool ok = false;
	vector < char > a(n),b(n);
	for(char &x: a)
		cin>>x;
	for(char &y: b)
		cin>>y;
	sort(all(a));
	sort(all(b));
	bool aux = true;
	for(int c = 0 ; c<n; c++)
		if( a[c] <= b[c])
			aux = false;
		ok = max( aux, ok);
	aux = true;
	for(int c = 0 ; c<n; c++)
		if( a[c] >= b[c])
			aux = false;
		ok = max(aux, ok);
	
	cout<<(ok ? "YES": "NO");

	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/