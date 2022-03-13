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
	vector < int > cuenta(1002);
	vector < int > sec;
	for(int c = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		if( !cuenta[x])
			sec.pb(x);
		cuenta[x]++;
	}

	bool ok = true;
	for(int a: sec)
		if( cuenta[a] > (( n+1) / 2 ))
			ok = false;
	cout<<(ok?"YES":"NO");
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/	