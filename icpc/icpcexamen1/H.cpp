#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;

int n;
bool vs[100];
ll ans = 0 ;

void maxi ( int it, vector< int > arr)
{
	if( it > n )
		return;

	

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while( t--)
	{
		int n;
		cin>>n;
		vector < int > vx(n);
		for( auto &v: vx)
			cin>>v;

		cout<<max(ans,ans2)<<"\n";


	}
}