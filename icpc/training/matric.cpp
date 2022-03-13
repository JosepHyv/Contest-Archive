#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	pair < int , int > pos;
	for(int c = 1 ; c<=5; c++)
		for(int d = 1; d<=5; d++)
		{
			int x;
			cin>>x;
			if( x ) 
				pos = {c,d};
		}
	int ans = abs( pos.first - 3) + abs( pos.second - 3);
	cout<<ans;
}

