#include<bits/stdc++.h>
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, k;
	cin>>n>>k;
	k--;
	string sec;
	cin>>sec;
	for(; ~k; k--)
	{
		for(int c = 0 ; c<sz(sec); c++)
			if(sec[c] == 'B')
				if( sec[c+1] == 'G')
				{
					swap(sec[c], sec[c+1]);
					c++;
				}
	}
	cout<<sec;
	
}

