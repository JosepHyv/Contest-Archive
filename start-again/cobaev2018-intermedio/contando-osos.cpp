#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a;
	cin>>a;
	int iz = 0 , der = 0 ;
	vector < char > vx;
	for( char x: a)
		if( x == 'o' || x == 's')
		{
			vx.pb(x);
			if ( x == 'o')
				der++;
		}
	int ans = 0 ;
	for( char v: vx)
	{
		if( v == 'o')
			iz++, der--;
		if( v == 's')
			ans += (iz*der);

	}
	cout<<ans;


	
}
