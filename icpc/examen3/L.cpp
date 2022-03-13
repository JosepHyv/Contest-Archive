#include<bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

set < string > diff;
int ans = 0;

void combina( string s)
{
	string aux = "";
	for( int c = 0 ; c<s.size(); c++)
	{
		aux = "";
		for( int d = c, k = 0 ; k < s.size(); d++,k++)
			aux += s[d%s.size()];
		//cout<<s<<" "<<aux<<"\n";
		diff.insert(aux);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	//set < string > diff;
	while( n--)
	{
		string s;
		cin>>s;
		if( diff.find(s) == diff.end())
			ans++;
		diff.insert(s);
		combina(s);
	}
	cout<<ans<<"\n";
	
}
