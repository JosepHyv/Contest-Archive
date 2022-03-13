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
	stack < int > pl,clean;
	int edif = 0;
	for(int c = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		if( x == 0 )
		{
			edif += sz(pl);
			pl = clean;
		}
		while( sz(pl)  && pl.top() > x)
		{
			edif++;
			pl.pop();
		}
		while( sz(pl) && pl.top() == x)
			pl.pop();
		if( x > 0)
			pl.push(x);
		

	}
	cout<<sz(pl)+edif;
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/