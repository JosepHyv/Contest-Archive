#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	vector < bool > vs(sz(s)+1);
	for(int c = 0; c<sz(s); c++)
		if( s[c] == 'W' && s[c+1] == 'U' && s[c+2] == 'B' )
			s[c] = s[c+1] = s[c+2] = ' ';
	vector < string > ans;
	string aux = "";
	for(auto v:s)
		if( v != ' ')
			aux += v;
		else
		{
			ans.pb(aux);
			aux = "";
		}
	ans.pb(aux);
	for(auto v: ans)
		if(sz(v))
			cout<<v<<" ";

}

