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
int cuenta[300];
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	bool ok = true;
	if( sz(a) != sz(b))
		ok = false;
	for(char x: b)
		cuenta[x]++;
	for( char x: a)
	{
		if( !cuenta[x])
		{
			ok = false;
			break;
		}
		cuenta[x]--;
	}
	for( char x: b)
		if( cuenta[x])
			ok = false;
	int cc = 0 ;
	if( sz(a) == sz(b))
	{
		for(int c = 0 ; c<sz(a); c++)
			if(a[c] != b[c])
				cc++;
	}
	if( cc > 2 || cc == 1 )
		ok = false;
	cout<<( ok ? "YES":"NO");

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/