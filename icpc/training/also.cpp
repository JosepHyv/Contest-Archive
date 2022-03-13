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

ll fib[MAXN] = {0,1,1};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector < pair < int , int > > vx(n);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c].fi, vx[c].se  = c+1;
	sort( all(vx));
	if( n == 1)
		cout<<1;
	else if( vx[0].fi == vx[1].fi)
		cout<<"Still Rozdil";
	else cout<<vx[0].se;

}

