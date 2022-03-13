#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5+1;
int edades[maxn];
pair < int , int > sets[maxn];
pair < int , int > trabaja[maxn];
int ans[maxn];

void initial( int n )
{
	for(int c = 0; c<=n; c++)
		sets[c].first = c;
}

int finds(int x)
{
	if( sets[x].first  == x)
		return x;
	 return sets[x].first = finds(sets[x].first);
}

void unions(int x, int y  )
{
	int a = finds(x), b = finds(y);
	sets[a].first = b;
	sets[x].second = y;
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin>>n>>m;
	initial(n);
	for(int c = 0 ; c<n; c++)
	{
		cin>>trabaja[c].first>>trabaja[c].second;
		edades[c+1] = trabaja[c].second;
		unions(c+1,trabaja[c].second);
	}
	sort(trabaja, trabaja+n);
	while( m--)
	{
		int p,x,y;
		cin>>p>>x>>y;
		
	}
	for(int c = 1 ; c<=n; c++)
		cout<<c<<" "<<sets[c].first <<" "<<sets[c].second<<"\n";



	

}

