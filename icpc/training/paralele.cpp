#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x,y,z, a, b, c;
	cin>>x>>y>>z;
	a = sqrt((x*z) / y);
	b = sqrt((x*y) / z);
	c = sqrt((y*z) / x);
	cout<<(a+b+c) * 4;
}

