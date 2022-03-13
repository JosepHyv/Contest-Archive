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

///aqui puede ir algo 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,m;
	cin>>n>>m;
	string ops = "";
	if( n > m )
		 ops = "GB";
	else ops = "BG";
	int tt = n+m;
	int aux = min(n,m);
	int aux2 = max( n,m);
	n = aux2;
	m = aux;
	for(int c  = 0 ; c<tt; c++)
	{
		if( !(c % 2 ))
		{
			if( n )
			{
				n--;
				cout<<ops[1];
			}
			else cout<<ops[0];
		}
		else  if( m )
		{
			m--;
			cout<<ops[0];
		}
		else cout<<ops[1];

	}

	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/