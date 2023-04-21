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

	map < string, int > ans;
	string word = "";
	int maxi = 0;
	int n;
	cin>>n;
	string a;
	while(n--)
	{
		cin>>a;
		int aux = ++ans[a];
		if( aux > maxi)
		{
			maxi = aux;
			word = a;
		}
	}
	cout<<word;


	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/