#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 

string bina(int n)
{
	string ans = "";
	while(n)
	{
		ans += (n % 2 ) + 48;
		n /= 2;
	}
	return string(rall(ans));
}


int cuenta(string a)
{
	int ans = 0 ;
	for(int c = 0 ; c<sz(a)-1; c++)
		if(a[c] != a[c+1])
			ans++;
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 29;
	set< int > coso;
	for(; n< 1000000; n++)
	{
		int ans = cuenta(bina(n));
		coso.insert(ans);
		cout<<n<<"  -> "<<ans<<"\n";
	}

	for(int a: coso)
	{
		cout<<a<<" ";
	}
	cout<<"\n";
}