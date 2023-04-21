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
	cin>>t;
	stack < string > pl;
	while(t--)
	{
		string s;
		char a;
		cin>>a>>s;
		if( a == 'F')
			pl.push(s);
		else if( sz(pl))
		{
			cout<<s<<" "<<pl.top()<<"\n";
			pl.pop();
		}

		//cout<<"\n";

		///uwu
	}
}
