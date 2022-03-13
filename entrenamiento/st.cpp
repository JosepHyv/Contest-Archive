#include<bits/stdc++.h>
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

string a;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a;
	for( int c = 0 ; c<sz(a); c++)
	{
		if( a[c] == '?')
		{
			if(a[c+1] == 'a' || a[c-1] == 'a' )
				a[c] = 'b';
			else if( a[c+1] == 'b' || a[c-1] == 'b')
				a[c] = 'a';
			else 
			{
				a[c] = 'a';
				if( c > 1)
					a[c+1] = 'b';
			}
		}
	}

	cout<<a;

}

