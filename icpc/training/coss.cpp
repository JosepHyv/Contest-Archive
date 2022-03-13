#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

vector < int > prim;
void gen( int n)
{
	bool vs[MAXN] = {false};
	vs[1] = true;
	for(int c = 4; c<=n; c+=2)
		vs[c] = true;
	for(int c = 3; c<=sqrt(n); c+=2)
		if(!vs[c])
			for(int d = c*c; d<=n; d+=c)
				vs[d] = true;

	for(int c = 0; c<= 1000; c++)
		if(!vs[c])
			prim.pb(c);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	gen(max(n,m));
	int posa = 0, posb = 0 ;
	for(int c = 0 ; c<sz(prim); c++)
		if( prim[c] == n)
		{
			posa = c;
			break;
		}

	for(int c = 0 ; c<sz(prim); c++)
		if( prim[c] == m)
		{
			posb = c;
			break;
		}

	if( posb == 0 )
		cout<<"NO";
	else if( posb - posa > 1 )
			cout<<"NO";
		else cout<<"YES";

}

