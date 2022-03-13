//TEMPLATE FOR CSES PROBLEMSET
//PROBLEM LINK:
//PROBLEM PATH: 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

int vx[MAXN];

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);
	int n;
	cin>>n;
	for(int c = 1 ; c<=n; c++)
		cin>>vx[c];

	int ans = 0 ;
	for(int c = 1 ; c<=n; c+= vx[c])
		ans++;
	cout<<ans;

	
}
