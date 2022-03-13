#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n = 0 ;
	int tt = 0;
	cin>>n;
	for(int c = 0 ; c<n; c++)
	{
		int x;
		cin>>x;
		tt += x;
	}

	int ans = 0 ;
	for(int c = 1; c<=5; c++)
		if( (tt+c) % ( n+1) != 1)
			ans++;
	cout<<ans;
}

