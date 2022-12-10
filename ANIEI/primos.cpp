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
constexpr int MAXN = (5 * (1e4))+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector < int > primos(MAXN);
	iota(all(primos),0);
	vector < bool > vis(MAXN);
	for(int c = 2; c*c <= MAXN; c+= 2)
	{
		primos[c] = 2;
		vis[c] = true;
	}
	for(int c = 3; c*c <= MAXN; c+= 3)
		if(!vis[c])
		{
			for(int d = c*c; d<=MAXN; d+= c)
				primos[d] = c;
		}

	int n;
	cin>>n;
	while(n--)
	{
		int q, k;
		cin>>q>>k;
		int ans = q-1;
		for(int c = k+1; c<=q; c++)
		{
			int it = c;
			while(primos[it] != it )
			{
				it = it / primos[it];
				//cout<<it<<" -> ";
			}
			if(it > k)
				ans--;
		}
		cout<<ans;
		cout<<"\n";

	}
}