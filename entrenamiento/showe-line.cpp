#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
ll g[7][7];
int arr[] = {1,2,3,4,5,6};
ll ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for(int c = 1; c<=5; c++)
		for(int d = 1; d<=5; d++)
			cin>>g[c][d];
	ll maxi = 0 ; 
	do 
	{ 
		ll maxi = 0;
		for(int c = 0; c<5; c++)
		{
			for(int d = c; d<5; d+=2)
			{
				maxi += g[ arr[d] ][arr[d+1]]+ g[arr[d+1]][ arr[d] ];
			}
		}
		if( maxi > ans)
		{/*
			solo debug
			for(int c = 0 ;c <6; c++)
				cout<<arr[c];
			cout<<"\n";*/
			ans = maxi;
		}

	}
	while( next_permutation(arr,arr+5));
	cout<<ans;
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/