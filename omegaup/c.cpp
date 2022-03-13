//https://omegaup.com/arena/problem/Sumando-elementos-opuestos-de-un/#problems
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll inf = 1 << 31;

ll n,m,k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	ll vx[n+1] = {0};
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];

	ll fin = n-1;
	for(int c = 0 ; c<n/2; c++)
		cout<<vx[c]+vx[fin--]<<" ";
}
