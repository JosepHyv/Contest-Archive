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

// void solve() {}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	//cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string ans = "";
		for( int c = 1; c<=n; c++) 
			ans += to_string(c);
		cout<<sz(ans);
		cout<<"\n";
		///uwu
	}
}
