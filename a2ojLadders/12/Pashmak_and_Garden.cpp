#include<bits/stdc++.h>
#define x first
#define y second
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

	vector < pair < int, int > > vx(4);
	for(int c = 0 ; c<2; c++)
		cin>>vx[c].x>>vx[c].y;
	if(vx[0] == vx[1])
	{
		cout<<-1;
		return 0;
	}
	if( vx[0].x == vx[1].x)
	{
			int distance = abs(vx[0].y - vx[1].y);
			vx[2] = {vx[0].x + distance, vx[0].y};
			vx[3] = {vx[1].x + distance, vx[1].y};
	}
	else if( vx[0].y == vx[1].y)
	{
		int distance = abs( vx[0].x - vx[1].x);
		vx[2] = {vx[0].x , vx[0].y + distance};
		vx[3] = {vx[1].x, vx[1].y + distance};
	}
	else
	{
		int distancex = abs( vx[0].x - vx[1].x);
		int distancey = abs( vx[1].y - vx[0].y);
		if( distancex != distancey)
		{
			cout<<-1;
			return 0;
		}
		else
		{	
			vx[2] = {vx[1].x, vx[0].y};
			vx[3] = {vx[0].x, vx[1].y};
		}	
	}
	cout<<vx[2].x<<" "<<vx[2].y<<" "<<vx[3].x<<" "<<vx[3].y;

	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

