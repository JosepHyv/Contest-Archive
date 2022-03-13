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
inline int distancia ( int x,int y, int a, int b )
{
	/// manhattan 
	int xtoa = abs( a - x);
	int ytob = abs( b - y );
	return xtoa+ytob;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	int cases = 0 ;

	//cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector < int > vx(4);
		for(int c = 0 ; c<4; c++)
			cin>>vx[c];
		int curr = distancia(vx[0],vx[1],vx[2],vx[3]);
		string a;
		cin>>a;
		int ans = 0;
		for(int c = 0 ; c<sz(a); c++)
		{
			/// N ( x, y+1 );
			/// S ( x, y-1 );
			/// E ( x+1, y );
			/// W ( x-1, y );
			if( distancia(vx[0],vx[1],vx[2],vx[3]) == 0  ) break;
			//cout<<a[c]<<" "<<curr<<" "<<ans<<"\n";
			int xi = vx[0];
			int yi = vx[1];
			if( a[c] == 'N')
				yi ++;
			if( a[c] == 'S')
				yi--;
			if( a[c] == 'E')
				xi++;
			if( a[c] == 'W')
				xi--

			if( curr > distancia(xi,yi,vx[2],vx[3]))
			{
				vx[0] = xi;
				vx[1] = yi;
				curr = distancia(xi,yi,vx[2],vx[3]);
			}

			ans++;
		}

		if( distancia(vx[0],vx[1],vx[2],vx[3]))
			cout<<-1;
		else cout<<ans;
		cout<<"\n";
		///uwu - vrm 
	}
}


/* [°-°]  <- tss  
   [./../] <- este mensaje puede cambiar

*/