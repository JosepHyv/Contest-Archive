#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef unsigned long long int ll;
constexpr int maxn = 1e7+2;
constexpr int inf = 2e9;

bool primes[maxn];
vector< int  > cribs(ll n )
{
	primes[0] = primes[1] = 1;
	for( ll c = 4; c<=n; c+=2)
		primes[c] = true;
	for( ll c = 3; c<=sqrt(n); c+=2)
		if( !primes[c])
			for(ll d = c*c; d<=n; d+=c)
				primes[d] = true;
	vector< int > criba;
	for( ll c = 0; c<=n; c++)
		if( !primes[c])
			criba.pb(c);
	return criba;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector< int > ans = cribs(4000000);
	/// los precalculo aunque, bueno, podemos intentar 
/*	for(int v: ans)
		cout<<v<<" ";*/	
	int formas = 0 ;
	while(n--)
	{
		ll x,y;
		cin>>x>>y;
		ll temp = x*y;
		for(int c = 0 ; c<sz(ans) && ans[c] <= sqrt(2*temp); c++)
			if( temp % ans[c] == 0 )
				formas++;
		cout<<(formas == 0 ? 1: formas)<<"\n";
		formas = 0 ; 

	}

}
