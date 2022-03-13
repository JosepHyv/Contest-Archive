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

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector < int > vx(n);
		int mini = inf, maxi = -inf;
		for(int c = 0 ; c<n; c++)
		{
			cin>>vx[c];
			mini = min( mini, vx[c]);
			maxi = max( maxi, vx[c]);
		}
		int posmin = 0, posmax = 0;
		for(int c = 0 ; c<n; c++)
		{
			if( vx[c] == mini)
				posmin = c;
			if( vx[c] == maxi )
				posmax = c;
		}

		int left = max( posmax, posmin)+1;
		int right = n - min( posmax, posmin);
		if( posmax < posmin) swap(posmin, posmax);
		int sum = (n - posmax) + posmin + 1;
		
		cout<<min({ left, right, sum});
		cout<<"\n";
	}
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

