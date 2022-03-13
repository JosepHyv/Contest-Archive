#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6;
constexpr int inf = 2e9;

ll vx[MAXN];
int n,m;

int main()
{	
	ios::sync_with_stdio(false); 
	cin.tie(0);

	cin>>n>>m;
	for(int c = 0 ; c<n; c++ ) 
		cin>>vx[c];
	sort(vx,vx+n);


	/*for(int c = 0 ;c <n; c++)
		cout<<vx[c]<<" ";
	cout<<"\n";*/

	int i = 0, f = n-1;
	int ans = 0;
	while( i < f)
	{
		//cout<<i<<" "<<f<<" "<<vx[i]<<" "<<vx[f]<<" "<<ans<<"\n";
		if( vx[f] + vx[i] < m )
		{
			vx[f] += vx[i];
			i++;
			f--;
			ans++;
		}
		else if ( vx[f] + vx[i] >= m)
		{
			if( vx[f] + vx[i] == m)
			{
				ans ++;
				f--;
				i++;
			}
			else
			{
				f--;
				ans++;
			}

		}
	}
	cout<<( i == f ? ans+1: ans ) ;

	/*cout<<"\n";
	for(int c = 0 ; c<n; c++)
		cout<<vx[c]<<" ";
	//	if()
	//cout<<ans;*/
	
}
