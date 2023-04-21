//https://omegaup.com/arena/problem/Caminos-en-la-rejilla-entera/#problems
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll inf = 1 << 31;

ll n,m,k;

ll mm[26][26];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int c = 0 ; c<=n; c++)
		mm[0][c] = 1;
	for(int c = 0; c<=n; c++)
		mm[c][0] = 1;

	for(int c = 1; c<=n; c++)
		for(int d = 1; d<=n; d++)
			mm[c][d] = mm[c-1][d] + mm[c][d-1];
	cout<<mm[n][n];
}
