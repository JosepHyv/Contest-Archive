#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
#define press(x)  setprecision(x)<<fixed
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;
constexpr int dx4[] = {-1,0,1,0};
constexpr int dy4[] = {0,-1,0,1};
constexpr int dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr int dy8[] = {-1,0,1,1,1,0,-1,-1};

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
	ll n;
	cin>>n;
	vector <  ll  > vx(n);
	for( ll &a: vx)
		cin>>a;
	sort(all(vx));

	ll ans = 0, last = 0 , first = 0 ;
	for(ll a: vx)
	{
		last += ( a == vx[0]);
		first += ( a == vx[n-1]);
	}
	//dbg(last, first);
	if( vx[0] == vx[n-1])
		cout<< 0<<" "<<( n * ( n-1) )/2;
	else 
		cout<<vx[n-1] - vx[0] <<" "<< last * first;
}

