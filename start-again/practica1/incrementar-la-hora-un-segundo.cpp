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
	int a,b,c;
	cin>>a>>b>>c;
	c++;
	int aux = (c%60 == 0) ;
	c %= 60;
	b += aux;
	aux = ( b > 0 && b%60 == 0 );
	b %= 60;
	a += aux;
	a %= 24;
	cout<<a<<" "<<b<<" "<<c;
}
