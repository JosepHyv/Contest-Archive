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
	int cc = 0 ;
	for(int c = 1; c<=3; c++)
		for(int d = 1; d<=3; d++)
			for(int e = 1; e<=3; e++)
			{
				if( c <= d && d <= e )
				{
					cc++;
					cout<<c<<" "<<d<<" "<<e<<"\n";

				}
			}
		cout<<cc;

	
}
