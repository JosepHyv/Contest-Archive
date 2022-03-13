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



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	string s;
	cin>>s;
	vector < char > ans;
	for(auto &v: s)
		v = tolower(v);
	char vocals[] = {'a','e','y','o','i','u'};
	for( auto v: s)
	{
		bool appear = false;
		for(int c = 0 ; c<6; c++)
			if( v == vocals[c])
			{
				appear = true;
				break;
			}
		if( !appear)
		{
			ans.pb('.');
			ans.pb(v);
		}
	}

	for( auto v: ans)
		cout<<v;

}

