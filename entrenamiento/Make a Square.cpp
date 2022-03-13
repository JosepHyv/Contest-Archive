//PROBLEM LINK:https://codeforces.com/contest/962/problem/C
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb(x) push_back(x)
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
constexpr ll MAXN = 1e9+3;
constexpr ll inf = 1ll << 32;

struct node
{
	string num;
	ll ps;
};
queue< node > cl;

bool is_square( ll a )
{
	 ll pp = sqrt( a );
	 if( pp * pp == a)
	 	return true;
	 return false;
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string n;
	cin>>n;
	mrk vs(atol(n.c_str())+1);
	node r = {n, 0};
	vs[atol(n.c_str())] = true;
	vs[0] = true;
	cl.push(r);
	ll ans = inf;
	while(!cl.empty())
	{
		r = cl.front();
		cl.pop();
		//cout<<r.num<<" "<<r.ps<<" "<<is_square(atol(r.num.c_str()))<<"\n";
		if(is_square(atol(r.num.c_str())) )
		{
			ans = min( ans, r.ps);
			continue;
		}
		string aux = r.num;
		reverse( all( aux));
		for(int c = 0; c<r.num.size(); c++ ) 
		{
			node h = r;
			string nuv = "";
			for(int d = 0 ; d<r.num.size(); d++)
				if( d!=c)
				{
					nuv += r.num[d];
				}
			if(nuv[0] =='0')
				continue;
			ll numero = atol(nuv.c_str());
			if( !vs[numero])
			{
				vs[numero] = true;
				h.num = to_string(numero);
				h.ps++;
				cl.push(h);
			}
		}
		for(int c = 0; c<aux.size(); c++ ) 
		{
			string nuv = "";
			for(int d = 0 ; d<aux.size(); d++)
				if( d!=c)
					nuv += aux[d];
			reverse(all(nuv));
			if(nuv[0] == '0')
				continue;
			ll numero = atol(nuv.c_str());
			if( !vs[numero])
			{
				node h = r;
				vs[numero] = true;
				h.num = to_string(numero);
				h.ps++;
				cl.push(h);
			}
		}
	


	}
	cout<<( ans == inf ? -1:ans);
	
}