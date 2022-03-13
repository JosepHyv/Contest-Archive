#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 

struct ranks
{
	int prob;
	int time;

	bool operator < ( const ranks &a ) const
	{
		if( a.prob != prob)
			return a.prob < prob;
		else return a.time > time;
	}
	bool operator == ( const ranks &a) const
	{
		return ( (a.prob  == prob ) && (a.time == time) );
	}
	bool operator != ( const ranks &a) const
	{
		return ( a.prob != prob) || ( a.time != time);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n, k;
	cin>>n>>k;
	vector < ranks > vx(n);
	for(int c = 0 ; c<n; c++)
		cin>>vx[c].prob>>vx[c].time;
	sort(all(vx));
	ranks tmp = vx[k-1];
	int ans = 0 ;
	for(int c = 0 ; c<n; c++)
		if( tmp == vx[c])
			ans++;
	cout<<ans ;



	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

