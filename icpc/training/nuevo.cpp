#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

bool ok( int a)
{
	vector < int > cc(12);

	while(a)
	{
		cc[a%10]++;
		if( cc[a%10] > 1 )
			return false;
		a/= 10;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int ans = 0;
	for(int c = n+1; c<=9012; c++)
		if( ok(c))
		{
			cout<<c;
			return 0;
		}
	
}

