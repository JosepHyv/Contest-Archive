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

ll vx[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll l = 0, s = 0 ;
	ll n,m;
	cin>>n;
	for(int c = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		vx[x] = c+1;
	}
	cin>>m;
	vi vy(m);
	for( auto &v: vy)
		cin>>v;
	for(auto v: vy)
	{
		l += vx[v];
		s += n - vx[v] +1; 
	}
	cout<<l<<" "<<s;
}

