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
	
	int i,f;
	string a;
	cin>>i>>f;
	getline(cin,a);
	getline(cin,a);
	for( int c = 0 ; c<i; c++)
		cout<<a[c];
	for( int c = f; c >= i; c--)
		cout<<a[c];
	for(int c = f+1; c<sz(a); c++)
		cout<<a[c];
}
