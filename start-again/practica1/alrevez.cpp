#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

void camp(char &a)
{
	a = ((a+1)%2) + 48;
	return;	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a;
	getline(cin,a);
	for( char &i: a)
		if( i != ' ')
			camp(i);
	cout<<a;
	
}
