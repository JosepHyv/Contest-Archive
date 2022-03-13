#include<bits/stdc++.h>
#define fi first 
#define se second
#define sz(x) ( int ) x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	string s,t;
	cin>>s>>t;
	vector < int  > vx;
	for(int c = 0 ; c<sz(s); c++)
		if( s[c] != t[c])
			vx.push_back(c);

	ll ans = 0 ;
	for(auto v: vx)
	{
		int posa , posb;
		posa = s[v] - 65;
		posb = t[v] - 65;
		int distancia = 0 ;
		if( posa < posb)
			distancia = posb - posa;
		else
		{
			distancia += 26 - posa;
			distancia += posb; 
		}

		ans += distancia / 13;
		distancia %= 13;
		ans += distancia;
	}

	cout<<ans;

	
}

