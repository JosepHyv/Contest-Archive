//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;

typedef __uint128_t lll;
typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;


void cc(lll a)
{
	string coso = "";
	while( a)
	{
		coso += '0' + (a%10);
		a/=10;
	}

	reverse(all(coso));
	cout<<coso;


}

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	ll a,b;
	cin>>a>>b;
	lll suma, sumb;
	suma = ((lll(a)*lll(a)+lll(a))) / 2;
	sumb = ((lll(b)*lll(b)+lll(b))) / 2;
	lll coso = (sumb - suma)+a;
	
	coso %= 9;
	if( coso )
		cc(coso);
	else
		cout<<9;
	
}