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


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int n;
	//vector < pair < int, int > > vx(n);
	cin>>n;
	int iz = 0 ,de = 0 ;
	bool appear	 = false;
	int sumi = 0 , sumd = 0 ;
	int diff = 0 ;
	for(int c = 0 ; c<n; c++ ) 
	{
		int x,y;
		cin>>x>>y;
		if( x % 2 && y % 2)
			appear = true;
		if( x % 2 )
			iz++;
		if( y % 2)
			de++;
		sumi += x;
		sumd += y;
		diff += ( x % 2 != y % 2 );
	}

	iz %= 2 ;
	de %= 2 ;
	if( iz != de)
		cout<<-1;
	else if( iz == 0)
		cout<<0;
	else if( diff == 0)
		cout<<-1;
	else cout<<1;

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

