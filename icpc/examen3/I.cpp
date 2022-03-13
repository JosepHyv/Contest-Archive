#include<bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

ll precio ( ll a)
{
	return  a >=500 ? a - 100: a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll vx[3];
	for(int c = 0 ; c<3; c++)
	{
		cin>>vx[c];
	}
	sort( vx, vx+3);
	/*for( int c = 0; c<3; c++)
		cout<<precio(vx[c])<<" ";
	cout<<"\n";*/
	ll a = precio(vx[0])  + precio( vx[1] )  + precio(vx[2]);
	ll b = precio( vx[0] + vx[1]) + precio(vx[2]);
	ll c = precio( vx[2] + vx[0]) + precio(vx[1]);
	ll d = precio(vx[0] + vx[1] + vx[2]);
	cout<<min( { a,b,c,d })<<"\n";


}
