#include<bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;
struct coso
{
	ll oro;
	int  i,f;
};

struct nodo
{
	int pos;
	ll suma;
	bool operator < ( const nodo & a) const 
	{
		return suma < a.suma;
	} 
};

priority_queue< nodo > cl;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector < coso > vx(n);
	for( coso &a: vx)
		cin>>a.oro>>a.i>>a.f;
	for( int c = 1; c<=n; c++)
		cl.push({c-1, vx[c].oro});
		ll ans = 0 ;
	while( !cl.empty())
	{
		nodo r = cl.top();
		cl.pop();
		cout<<r.pos <<" "<<r.suma<<" "<<vx[r.pos].oro<<" "<<vx[r.pos].i<<" "<<vx[r.pos].f<<"\n";
		if( r.pos >= n-1)
		{
			cout<<r.suma<<"\n";// + vx[r.pos].oro<<"\n";
			return 0;
		}
		/*if( r.pos >= n-1 )
		{
			cout<<r.suma<<"\n";
			return 0 ;
		}*/

		for( int c = vx[r.pos].i; c<= vx[r.pos].f; c++)
		{
			//ll aux = r.suma;
			if( r.pos + c <= n-1)
			{
				//aux += vx[r.pos + c].oro;
				cl.push({r.pos + c ,  r.suma + vx[r.pos].oro});//, r.pos + c});			
			}
		}
	}
	cout<<ans<<"\n";
}
