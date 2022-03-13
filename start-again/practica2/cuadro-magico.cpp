#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int mm[10][10];
int fil[3];
int col[3];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	for(int c = 0 ; c<3; c++)
	{
		for(int d = 0 ; d<3; d++)
		{
			cin>>mm[c][d];
			fil[c] += mm[c][d];
			col[d] += mm[c][d];
		}
	}	

	int diag = 0;
	for(int c = 0,d = 2; c<3; c++,d--)
	{
		diag += mm[c][c];
		diag += mm[c][d];
	}

	for(int c = 0 ; c<3; c++)
		if( fil[c] != 15 || col[c] != 15 || diag != 30)
		{
			cout<<"NO";
			return 0;
		}

	cout<<"SI";

}
