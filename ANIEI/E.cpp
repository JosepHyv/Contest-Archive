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

	ul t;
	while(cin>>t && t > 0 )
	{
		if(!(t % 9 )) cout<<9;
		else cout<<t%9;
		cout<<"\n";
	}

}