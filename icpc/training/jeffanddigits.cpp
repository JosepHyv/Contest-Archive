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
	int n;
	cin>>n;
	int cincos = 0, zeros = 0;
	while( n-- )
	{
		int x;
		cin>>x;
		if( x == 5 )
			cincos++;
		else zeros++;
	}
	if( !zeros)
		cout<<-1;
	else if( cincos < 9 )
		cout<<0;
	else
	{
		int aux = cincos / 9;
		for(int c = 0 ; c<aux*9; c++)
			cout<<5;
		while( zeros--)
			cout<<0;
	}

	
}

