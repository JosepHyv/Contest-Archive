#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n,k;
	cin>>n>>k;
	ll sodd = n - ( n/2 ), seven = n/2;
	if( k > sodd)
		cout<<2 * ( k - sodd);
	else
		cout<<( 2*k )-1;
	
}

