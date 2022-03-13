#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	int ans = 0 ;
	while( t--)
	{
		string s;
		cin>>s;
		if( s == "X++")
			ans++;
		if( s == "++X")
			++ans;
		if( s == "--X")
			--ans;
		if( s == "X--" ) 
			ans--;
	}

	cout<<ans;
	
}

