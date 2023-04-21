#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

// void solve() {}
char abiertos[] = {'<' , '(', '{', '[' };
char cerrados[] = {'>', ')', '}' , ']' };

bool same(char a, char s[])
{
	for(int c = 0 ; c<4; c++)
		if( a == s[c])
			return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	//cin>>t;
	int ans = 0 ;
	while(t--)
	{
		string s;
		cin>>s;
		stack < char > pl;
		for(int c = 0 ; c<4;c++)
			if( s[0] == cerrados[c])
			{
				cout<<"imposible";
				return 0;
			}
		for(char a: s)
		{
			if( !sz(pl) || same(a,abiertos) ) pl.push(a);
			else 
			{
				int pos = 0 ;
				for(int c = 0; c<4; c++)
					if( pl.top() == abiertos[c]) 
					{
						pos = c;
						break;
					}
				if( a != cerrados[pos])		
					ans++;
				pl.pop();
			}
		}
		s = to_string(ans);
		cout<<(!sz(pl) ? s : "imposible");
		cout<<"\n";
		///uwu
	}
}
