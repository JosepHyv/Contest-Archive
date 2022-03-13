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

	int n,m;
	cin>>n>>m;
	vector < int > a(n),b(m);
	vector < int > two;
	for(int &x:a)
	{
		cin>>x;
		two.pb(x);
	}
	for( int &x:b)
	{
		cin>>x;
		two.pb(x);
	}
	sort(all(two));
	sort(all(a));
	sort(all(b));
	vector < int > ans;
	for( int c = a.back(); c<=b.back(); c++)
	{
		bool ok = true;
		for(int x: a)
			if( c%x )
			{
				ok = false;
				break;
			}
		for(int y: b)
			if(  y % c  || !ok )
			{
				ok = false;
				break;
			}

		if( ok )
			ans.pb(c);
	}
	for(int c: two)
	{
		bool ok = true;
		for(int x: a)
			if( c%x )
			{
				ok = false;
				break;
			}
		for(int y: b)
			if(  y % c  || !ok )
			{
				ok = false;
				break;
			}

		if( ok )
			ans.pb(c);
	}
	sort(all(ans));
	for(int x: ans)
		cout<<x<<" ";

	//uwu
}
