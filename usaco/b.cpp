#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0,  sizeof(x))
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;
constexpr int dx[] = {-1,0,1,0,-1,-1,1,1};
constexpr int dy[] = {0,1,0,-1,-1,1,1,-1};

void DBG()
{
	cerr<<"]\n";
	return;
}
template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t)) cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	
	int t = 1;
	// cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		vector < int > vx(n);
		for( int &a: vx)
			cin>>a;
		//uwu-vrm-uwu
	}

}

