#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int cc[60];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a,b, name;
	bool ok = true;
	cin>>a>>b>>name;
	for(auto v: name)
		cc[v-'A']++;
	for(auto v: a)
	{
		if( !cc[v-'A'] || cc[v-'A'] < 0 )
			ok = false;
		cc[v-'A']--;
	}
	for(auto v: b)
	{
		if( !cc[v-'A'] || cc[v-'A'] < 0 )
			ok = false;
		cc[v-'A']--;
	}
	for(int c = 0 ; c<26; c++)
		if( cc[c])
			ok = false;
	cout<<(ok?"YES":"NO");
}

