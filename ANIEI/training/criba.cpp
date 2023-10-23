#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector < int > prime(n + 2);

	for(ll c = 2; c<=n; c++)
	{
		if(!prime[c])
		{
			for(ll d = c*c; d<=n; d+=c)
				prime[d] = c; 

		}
	}

	// cout<<n<<": ";
	// for(int c = 2; c * c  <= n; c++)
	// {
	// 	while(n % c == 0 )
	// 	{
	// 		n /= c;
	// 		cout<<c<<' ';
	// 	}
	// }


	// for(ll c = 2; c<=n; c++)
	// 	cout<<c<<' '<<prime[c]<<'\n';

	ll it = n;
	ll ans = 1;
	cout<<n<<": ";
	while(prime[it])
	{
		// cout<<prime[it]<<' ';
		ans *= prime[it];
		n /= prime[it];
		it = n;
		cout<<n<<'\n';

	}
	cout<<it<<' '<<ans * it;
	cout<<"\n";
}





/*



*/