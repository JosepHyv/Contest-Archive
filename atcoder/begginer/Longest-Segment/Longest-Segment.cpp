// template c++ example by Joseph Hynimoto Aguilar Lopez
#include<bits/stdc++.h>
#define debug(x) cerr<<#x<<" = "<<x<<"\n"
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///your variables are here


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	///solution here :)
	int n;
	cin>>n;
	vector < pair < int , int > > vx(n);
	for(auto &[a,b]: vx)
		cin>>a>>b;
	double ans = -1e10 ;
	for(auto a : vx)
	{
		for(auto b : vx)
		{
			double aux = pow((a.first  - b.first), 2);
			aux += pow((a.second - b.second), 2);
			aux = sqrt(aux);
			ans = max(ans, aux);	
		}
	}
	cout<<ans;

	cout<<"\n";

}


