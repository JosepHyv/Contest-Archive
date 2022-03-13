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
	
	string s;
	int n;
	cin>>n;
	cin>>s;
	int ans = 0 ;
	for(int c = 0 ; c<sz(s)-1; c++)
		if( s[c] == s[c+1])
			ans++;
	cout<<ans;
}

