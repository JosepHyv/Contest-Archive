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
char abre[] = {'<' , '(', '{', '[' };
char cierra[] = {'>', ')', '}' , ']'};
int ans;

int esta(char a, char ar[])
{
	for(int c = 0 ; c<4; c++)
		if( a == ar[c]) return c;
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	//cin>>t;
	while(t--)
	{
		string s = "";
		cin>>s;
		int pos = 0 ;
		stack < char > pl;
		if( esta(s[0], cierra) != -1)
		{
			cout<<"imposible\n";
			return 0;
		}

		for( char a : s)
		{
			if( !sz(pl) || esta(a, abre) != -1)
				pl.push(a);
			else
			{
				pos = esta(pl.top(), abre);
				if( a != cierra[pos])
					ans++;
				pl.pop();
			}
		}

		if( sz(pl))
			cout<<"imposible";
		else cout<<ans;
		cout<<"\n";
		///uwu

	}
}
