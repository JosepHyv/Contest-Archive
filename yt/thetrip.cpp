#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	while( cin>>n && n > 0 )
	{
		vector < double > vx(n);
		double prom = 0;
		for(auto &v: vx)
		{
			cin>>v;
			prom+=v;
		}
		prom /= n;
		//cout<<prom<<"\n";
		 double ans = 0 ;
		 double neg = 0, pos = 0;  
		for(auto v: vx)
		{
			double diff =  (long) (double )(( v - prom ) * 100.0 ) / 100.0;
			if( diff < 0 )
				neg += diff;
			else pos += diff;
		}
		ans = ( -neg  > pos ? -neg: pos);
		cout<<"$"<<setprecision(2)<<fixed<<abs(ans)<<"\n";
	}
}

