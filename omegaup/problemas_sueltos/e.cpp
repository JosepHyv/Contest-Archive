//https://omegaup.com/arena/problem/Torre-5G/#problems
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll inf = 1 << 30;

ll n,m,k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll ans = inf;
	cin>>n>>k;
	ll vx[n+2] = {0};
	ll ante = 0 ;
	for(int c = 0 ; c<n; c++)
	{
		cin>>vx[c];
		vx[c] += ante;
		ante = vx[c];
	}

	vx[-1] = vx[-2] = 0 ;
	int i = 0,f = n-1;
	for(int c = 1; c<n; c++)
	{
		ll aux = 0 ;
		i = ( (c - k) + n ) % n;
		f = ( c + k ) % n;
		if( i  < c)
			aux += vx[((c-1) + n ) % n ] - vx[( ( i - 1 ) +n ) % n];
		else
			aux += ( vx[n-1] - vx[( ( i - 1 ) +n ) % n ] ) +  vx[((c-1) + n ) % n];

		if( f  > c )
			aux += vx[f] - vx[c];
		else
			aux += vx[f] + ( vx[n-1] - vx[c]);

		aux += vx[c] - vx[((c-1) + n ) % n];

		cout<<i<<" "<<c<<" "<<f<<" "<<aux<<"\n";
		cout <<" para que es que estoy haciendo eso\n";
		ans = min( aux, ans);
	}
	cout<<ans;

}
