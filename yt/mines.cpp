#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int ans[102][102];
int n,m;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	bool ok = false;
	int cases =  0;
	while( cin>>n>>m )//&& n >0 && m > 0)
	{
		if( n == 0 && m == 0 )
			break;
		///cout<<"\n";
		vector < pair < int, int > > secu;
		for(int c = 0 ; c<n; c++)
			for(int d = 0 ; d<m; d++)
			{
				ans[c][d] = 0;
				char op;
				cin>>op;
				if( op == '*')
					secu.push_back({c,d});
			}

		int dx[] = {-1,-1,-1,0,1,1,1,0};
		int dy[] = {-1,0,1,1,1,0,-1,-1};

		for(auto v: secu)
		{
			ans[v.first][v.second] = -1;
			for(int c = 0 ; c<8; c++)
			{
				if( v.first + dx[c] >= 0 && v.first + dx[c] < n   && v.second + dy[c] >=0 && v.second + dy[c] < m 
				  && ans[v.first+dx[c]][v.second+dy[c]] != -1)
					ans[v.first + dx[c]][v.second + dy[c]]++;
			}
		}
		if( cases >= 1) cout<<"\n";
		cout<<"Field #"<<++cases<<":\n";
		for(int c = 0 ; c<n; c++)
		{
			for(int d = 0 ; d<m; d++)
			{
				if( ans[c][d] == -1)
					cout<<'*';
				else cout<<ans[c][d];
			}
			cout<<"\n";
		}

		
	}
}

