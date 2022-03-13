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
int mm[200][200];
int n;
bool isAdj(int x, int y )
{
	int vx[] = {-1,0,1,0};
	int vy[] = {0,1,0,-1};
	for(int c = 0 ; c<4; c++)
	{
		int ax = x+vx[c];
		int ay = y+vy[c];
		if( ax >= 1 && ax <= n && ay >= 1 && ay <=n )
		{
			//cerr<<ax<<" "<<ay<<" "<<mm[x][y]<<" "<<mm[ax][ay]<<"\n";
			if(abs(mm[x][y] - mm[ax][ay]) == 1 )
				return true;
		}
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		//int n;
		cin>>n;
		if( n == 1 )
		{
			cout<<1<<"\n";
			continue;
		}
		int aux = n;
		aux *=n;
		int pos = 2;
		for(int c = 1 ; c<=n; c++)
		{
			for(int d = 1; d<=n; d++)
			{
				mm[c][d] = pos;
				pos += 2;
				if( pos > aux)
					pos = 1;
			}
		}
		bool ok = true;
		for(int c = 1 ; c<=n; c++)
			for(int d = 1; d<=n; d++)
				if( isAdj(c,d) )
				{
					ok = false;
					break;
				}
		if( ok )
		{
			for(int c = 1 ; c<=n; c++)
			{
				for(int d = 1; d<=n; d++)
					cout<<mm[c][d]<<" ";
				cout<<"\n";
			}
		}
		else cout<<-1<<"\n";
		

	}

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/