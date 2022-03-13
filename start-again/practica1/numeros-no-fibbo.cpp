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

	set < int > ans;
	ans.insert(1);
	int curr = 1, vns = 1;
	for( int c  = 2; c<24; c++)
	{
		int aux = vns;
		vns += curr;
		curr = aux;
		ans.insert(vns);
	} 

	int n;
	cin>>n;
	for(int c = 2; c<n; c++)
		if( ans.find(c) == ans.end())
			cout<<c<<" ";

}
