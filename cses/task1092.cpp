#pragma GCC optimize ("-O3")
#pragma GCC optimize ("unroll-loops")
#include<set>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>
#include<stdio.h>
#include<climits>
#include<cstdlib>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#define f first 
#define s second
#define all(x) x.begin() , x.end()
#define mcm(a,b) a*b/__gcd(a,b);
#define pb(x) push_back(x)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vll;
typedef pair< ll, ll > pll;
typedef pair< int , int > pii;
const ll mod = 1e9+7;
const ll MAXN = 1e6+3;
const ll inf = (1ll << 32 );
const ll ninf = (-1ll << 32);

ll  t,n,k;

void solve()
{
	
	return;
}

int main()
{
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	cin>>t;
	ll sum = t * (t+1) / 2;
	if( sum % 2 == 0 )
	{
		vll ans;
		bool vs[t+2] = {false};
		ll temp = 0;
		for(ll c = t; c>=1; c--)
			if( temp + c <= sum/2 )
			{
				temp += c;
				ans.pb(c);
				vs[c] = true;
			}

		cout<<"YES\n"<<ans.size()<<"\n";
		for( ll v:ans)
			cout<<v<<" ";
		cout<<"\n"<<t - ans.size()<<"\n";
		for(int c = 1; c<=t; c++)
			if( !vs[c])
				cout<<c<<" ";

	}
	else
		cout<<"NO";

}
