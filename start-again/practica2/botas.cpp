#include<iostream>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;
int cc[maxn];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int mm = 0;
	for(int c = 0; c<n; c++)
	{
		int x;
		cin>>x;
		cc[x]++;
		mm = max(mm,x);
	}

	int ans = 0 ;
	for(int c = 0; c<=mm; c++ )
		if( cc[c]%2)
			ans++;
	cout<<ans;
}
