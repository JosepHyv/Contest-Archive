//PROBLEM LINK:https://codeforces.com/contest/1194/problem/B
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 5e4+3;
constexpr ll inf = 1 << 30;

vector < pii > fila[MAXN],columna[MAXN];
pii minfil[MAXN], mincol[MAXN];
int n,m;
void clear (int n,int m)
{
	vector < pii > lim;
	for(int c = 0; c<=n; c++)
		{
			fila[c] = lim;
			minfil[c] = {0,0};
		}
	for(int c = 0; c<=m; c++)
	{
		mincol[c] = {0,0};
		columna[c] = lim;
	}
	return;
}

void input()
{
	n = m = 0;

	cin>>n>>m;
	clear(n,m);
	for(int c = 1; c<=n; c++)
	{
		for(int d = 1; d<=m; d++)
		{
			char op;
			cin>>op;
			if( op == '.')
			{
				fila[c].pb( {c,d} );
				columna[d].pb({c,d});
				minfil[c].fi++;
				minfil[c].se = c;
				mincol[d].fi++;
				mincol[d].se = d;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		input();
		pii fil = {inf,inf}, col = fil;
		if( n == m )
		{
			for(int c = 1; c<=n; c++)
			{
				fil = min ( fil, minfil[c]);
				col = min( col, mincol[c]);
			}
		}
		else
		{
			for(int c = 1; c<=n; c++ ) 
				fil = min( fil, minfil[c]);

			for(int d = 1; d<=m; d++ )
				col = min( col, mincol[d]);
		}

		/*cout<<t<<"\n"<<"Filas\n";
		for(int c = 1; c<=n; c++)
			cout<<minfil[c].first <<" "<<minfil[c].second<<"\n";
		cout<<"columna\n";
		for(int c = 1; c<=m; c++)
			cout<<mincol[c].first <<" "<<mincol[c].second<<"\n";*/
		if( !fil.fi && !col.fi)
		{
			cout<<0<<"\n";
			continue;
		}
		int partial = 0 ;
		if( fil.fi <= col. fi)
		{
			int mini = inf;
			for(auto v:fila[fil.se])
				mini = min(mini, (int)columna[v.se].size());
			partial = fil.fi + mini -1;
		}
		else
		{
			int mini = inf;
			for(auto v:columna[col.se])
				mini = min( mini, (int)fila[v.fi].size());
			partial = col.fi + mini -1;
		}
		int ans = minfil[fil.se].fi + mincol[col.se].fi;
		int sol = 0;
		for(auto v:fila[fil.se])
			for(auto i:columna[col.se])
				if( i == v)
					sol++;
		cout<<min(ans-sol, partial ) <<"\n";
	}

	
}