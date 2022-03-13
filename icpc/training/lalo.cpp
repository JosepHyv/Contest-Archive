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
	string n;
	cin>>n;
	bool ok = true;
	for(auto v: n)
		if( v !='1' && v !='4')
			ok  = false;
	if( n.find("444") != string::npos)
		ok = false;
	if( n[0] == '4' || n == "44" || n == "444") ok = false;
	cout<<(ok?"YES":"NO");
}

