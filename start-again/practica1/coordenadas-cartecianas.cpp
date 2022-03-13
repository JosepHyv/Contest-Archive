#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	while( n--)
	{
		int x,y;
		cin>>x>>y;
		if( x > 0 && y > 0 )
			cout<<"I";
		if( x < 0 && y > 0)
			cout<<"II";
		if( x < 0 && y < 0 )
			cout<<"III";
		if( x > 0  && y < 0 )
			cout<<"IV";
		cout<<"\n";
	}
}
