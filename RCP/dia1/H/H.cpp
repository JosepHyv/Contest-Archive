#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int lld;
typedef long double ld;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;

	int n,m,k,l;
 	cin>>n>>m>>k>>l;
 	if( n - 2 >= k && m - 2 >= l )
 		cout<<1;
 	else cout<<0;

	cout<<"\n";
}