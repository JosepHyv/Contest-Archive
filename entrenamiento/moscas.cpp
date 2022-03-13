#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
ll cuenta[MAXN];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin>>n;
	ll maxi  = -inf;
	int ima = 0;
	int imi = inf;
	while( n--)
	{
		int x,y;
		cin>>x>>y;
		cuenta[x]++;
		cuenta[y]--;
		ima = max( ima,y);
		imi = min( imi, x);
	}

	for(int c = imi; c<=ima; c++)
	{
		cuenta[c] += cuenta[c-1];
		maxi = max( maxi, cuenta[c]);
	}
	
	/*for(int c = imi; c<=ima; c++)
		cerr<<cuenta[c]<<" ";

	cerr<<"\n";*/
	cout<<maxi<<"\n";
	int diff = -1;
	for(int c = imi; c<=ima+1; c++)
	{
		if( cuenta[c] == maxi)
		{
			if( diff == -1)
				diff = 1;
			else diff++;
		}
		else
		{
			if( diff != -1)
			{
				cout<<c-diff<<" "<<c<<"\n";
				diff = -1;
			}
		}
	}	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

