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

	string a;
	getline(cin,a);
	int sub = 0 ;
	int ans = 0 ;
	for( char s: a)
	{
		if( (s >= 'a' && s <='z') || ( s >= 'A' && s <= 'Z') )
			sub ++;
		if( s == ' ')
		{
			if( sub > ans)
				ans = sub;
			sub = 0;
			//continue;
		}

	}
	if( sub > ans )
		ans = sub;
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 

}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/