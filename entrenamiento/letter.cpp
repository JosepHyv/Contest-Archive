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
int cuenta2[300];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b;
	getline(cin, a );
	getline(cin, b );
	for(char x: a)
		cuenta[x]++;

	bool ok = true;
	for(int c = 0 ; c<sz(b); c++)
	{
		if( b[c] != ' ')
			if( !cuenta[b[c]] )
			{
				ok = false;
				break;
			}
			else cuenta[b[c]]--;
	}
	cout<<(ok? "YES": "NO");
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/