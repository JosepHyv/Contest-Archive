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



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	queue < pii > fils;
	for(int c = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		fils.push({x, c+1});
	}
	int last = 0;
	while(sz(fils))
	{
		pii r = fils.front();
		fils.pop();
		last = r.se;
		if( r.fi > m)
		{
			r.fi -= m;
			fils.push(r);
		}
	}
	cout<<last;
	
}

