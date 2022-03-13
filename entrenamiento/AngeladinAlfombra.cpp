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
ll mm[1002][1002];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m;
	cin>>n>>m;
	
	//vector < vector < ll > > mm(n, vector< ll > (m));
	
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<m; d++)
			cin>>mm[c][d];
	
	int t, giro = 0 ;
	cin>>t;
	
	while( t--)
	{
		char op;
		cin>>op;
		if( op == 'L')
			giro--;
		else giro++;
	}

	int temp = 0;
	if( giro < 0  )
	{
		giro = abs( giro );
		temp = giro % 4;
		if( temp  )
		{
			if( temp == 1 )
			{
				
				for(int c = m-1; c>= 0; c--)
				{
					for(int d = 0 ; d<n; d ++)
						cout<<mm[d][c]<<" ";
					cout<<"\n";
				}
			}
			else if ( temp == 2 )
			{
				
				for(int c = n-1 ; c>= 0; c--)
				{
					for(int d = m-1 ; d>=0; d--)
						cout<<mm[c][d]<<" ";
					cout<<"\n";
				}

			}
			else if( temp == 3)
			{
				
				for(int c = 0 ; c<m ; c++)
				{
					for(int d = n-1 ; d >= 0; d--)
						cout<<mm[d][c]<<" ";
					cout<<"\n";
				}
			}
		}
		else
		{
			for(int c = 0; c<n; c++)
			{
				for(int d = 0 ; d<m; d ++)
					cout<<mm[c][d]<<" ";
				cout<<"\n";
			}
		}
	}	
	else
	{
		temp = giro % 4;
		if( temp )
		{
			if( temp == 1 )
			{
				
				for(int c = 0 ; c<m ; c++)
				{
					for(int d = n-1 ; d >= 0; d--)
						cout<<mm[d][c]<<" ";
					cout<<"\n";
				}
			}
			else if ( temp == 2 )
			{
				
				for(int c = n-1 ; c>= 0; c--)
				{
					for(int d = m-1 ; d>=0; d--)
						cout<<mm[c][d]<<" ";
					cout<<"\n";
				}
			}
			else if( temp == 3)
			{
				
				for(int c = m-1; c>= 0; c--)
				{
					for(int d = 0 ; d<n; d ++)
						cout<<mm[d][c]<<" ";
					cout<<"\n";
				}
			}
		}
		else
		{
			for(int c = 0; c<n; c++)
			{
				for(int d = 0 ; d<m; d ++)
					cout<<mm[c][d]<<" ";
				cout<<"\n";
			}
		}
	}

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/
