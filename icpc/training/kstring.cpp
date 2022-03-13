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

int cc[30];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	string s;
	cin>>k>>s;
	sort(all(s));
	for(auto v:s)
		cc[v-'a']++;
	bool ok = true;
	for(int c = 0; c<26; c++)
		if( cc[c] % k )
			ok = false;
	if(!ok)
		cout<<-1;
	else
	{
		for(int i = 0 ;  i<k; i++)
			for(int c = 0 ; c<sz(s); c+=k)
				cout<<s[c];

	}
}

