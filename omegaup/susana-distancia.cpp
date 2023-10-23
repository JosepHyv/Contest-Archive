#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	vector < int > vx(n), vy(n);
	queue < int > range;
	vector < int > ans(n);
	for(int c = 1; c<n; c++)
	{
		cin>>vx[c];
		vy[n - c] = vx[c];
		vx[c] += vx[c-1];
	}
	for(int c = 1; c<n; c++) vy[c] += vy[c-1];
	for(int c = 0; c<n-1; c++)
	{
		auto alcanzable = upper_bound(vx.begin() + c, vx.end(), vx[c] + 150);
		auto alcanzable2 = upper_bound(vy.begin() + c, vy.end(), vy[c] + 150);
		int position = 0;
		int position2 = -1;
		if(alcanzable == vx.end())
		{
			position = n - c - 1;
		}
		else
		{
			if(vx[c] + 150 != *(alcanzable - 1))
				position = (alcanzable -  (vx.begin() + c)) - 1; 

			if((vx.begin() + c) == (alcanzable - 1))
				position++;
		}

		if(alcanzable2 == vy.end())
		{
		// cout<<c<<' '<<c + (alcanzable2 - (vx.begin() - c))<<'\n';
			position2 = n - c - 1;
		}
		else
		{	
			alcanzable2--;	
			if(vy[c] + 150 != *(alcanzable2))
				position2 = (alcanzable2 -  (vy.begin() + c)); 

			if((vy.begin() + c) == alcanzable2 - 1)
				position2++;
						
			cout<<position2<<'\n';
		}


		// cout<<c<<' '<<vx[c]<<' '<<(vx[c] + 150)<<' '<< c + position <<'\n';
		ans[c] = position;	
		ans[n - c - 1] += position2;	
	}
	for(int a: ans)
		cout<<a<<' ';
	cout<<"\n";
}