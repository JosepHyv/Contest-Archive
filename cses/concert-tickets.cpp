//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int n,m;
	multiset < int , greater< int > > algo;

	cin>>n>>m;
	while( n--)
	{
		int x;
		cin>>x;
		algo.insert(x);
	}
	while( m--)
	{
		int x;
		cin>>x;
		auto ans = algo.lower_bound(x);
		if( ans == algo.end())
			cout<<-1;
		else
		{
			cout<<*ans;
			algo.erase(ans);
		}

		cout<<"\n";
	}
	/*for(auto v: algo)
		cout<<v<<" ";*/
}
