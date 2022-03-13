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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin>>n;
	vector  < int > ans(6000);
	vector < pair < int , int > > sec(2*n);
	for(int c = 0 ; c<2*n; c++)
	{
		cin>>sec[c].fi;
		ans[sec[c].fi] ++ ;
		sec[c].se = c;
	}
	sort(all(sec));
	bool ok = true;
	for(int y: ans) 
		if( y % 2 )
			ok = false;
	if( ok )
	{
		for(int c = 0 ; c<2*n; c+=2)
			cout<<sec[c].se+1<<" "<<sec[c+1].se+1<<"\n";
	}
	else cout<<-1;


	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

