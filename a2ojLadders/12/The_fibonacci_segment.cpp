#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;

void DBG(){	cerr<<")\n";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n;
	cin>>n;
	vector  < ul > vx(n);
	for(int c = 0; c<n; c++)
		cin>>vx[c];
	if( n == 1 )
	{
		cout<<1;
		return 0;
	}
	ul ans = 0 ;
	int l = 0, r = 2;
	while( r < n )
	{
	//	dbg(ans, l,r, ( r -1 - l ) +1);
		if( vx[r] == ( vx[r-1] + vx[r-2])) r++;
		else 
		{
				ans = max( ans, (ul)( r-1 - l )+1);
				if( vx[r-1] + vx[r] == vx[r+1])
				{
					l = r-1;
					r ++;
				}
				else  
				{	
						l = r;
						r++;
				}
		}
	}
//	dbg( r-l, r, l);
	ans = max( ans,(ul) r-l);
	cout<<max((ul)2, ans);
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

