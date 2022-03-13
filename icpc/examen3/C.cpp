#include<bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef __uint128_t lll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

void imprime( lll a)
{
	string coso = "";
	while(a)
	{
		coso += char('0' + (a % 10));
		//cout<<char('0' + (a % 10))<<" ";
		a /= 10;

	}
	reverse(all(coso));
	cout<<coso<<"\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);



	int t ;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		lll a = x, b = y;

		a += 1;

		lll ans = (b * (a * ( a + 1) / 2));
		imprime(ans);
	}
	
}
