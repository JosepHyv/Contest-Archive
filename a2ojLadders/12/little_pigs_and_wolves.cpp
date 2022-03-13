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
char mm[12][12];
int n,m;
bool valid(int x,int y)
{
	int vx[] = {-1, 0, 1, 0};
	int vy[] = {0, 1, 0, -1};
	for(int c = 0 ; c<4; c++)
	{
		int xx = x + vx[c];
		int yy = y + vy[c];
		if( xx >= 0 && xx < n && yy >= 0 && yy < m )
		{
			if( mm[xx][yy] == 'P' )
			{
				mm[xx][yy] = '.';
				return true;
			}
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	cin>>n>>m;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<m; d++)
			cin>>mm[c][d];
	int ans = 0;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<m; d++)
		{
			if(mm[c][d] == 'W')
				if( valid(c,d))
					ans++;
//			cin>>mm[c][d];
		}
	cout<<ans;
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

