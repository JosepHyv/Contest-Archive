#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

bool check( pii a, pii b)
{
	if(b.fi > a.fi && a.se == b.se) return true;
	if(b.fi < a.fi && a.se == b.se) return true;
	if(b.fi == a.fi && b.se < a.se) return true;
	if(b.fi == a.fi && b.se > b.se) return true;
	return false;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector < pii > vx(n);
	for( auto &v: vx)
		cin>>v.fi>>v.se;

	int dx[] = {-1, 0, 1, 0 };
	int dy[] = { 0, 1, 0, -1};
	int ans = 0;
	for(auto v: vx)
	{
		int u = 0 , d = 0 , l = 0 , r = 0 ;
		for( auto i: vx)
		{
			if(v.fi == i.fi )
			{
				if( i.se > v.se) 
					u++;
				if( i.se < v.se)
					d++;
			}
			if( v.se == i.se)
			{
				if( i.fi > v.fi)
					r++;
				if( i.fi < v.fi)
					l++;
			}

		}

		if( u && d && l && r)
			ans++;

	}

	cout<<ans;
	
}

