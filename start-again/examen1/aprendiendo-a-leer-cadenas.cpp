#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 0 ;
	cin>>n;
	string a  = "";
	cin.ignore(100,'\n');//, '\n');
	while(n--)
	{
		getline(cin,a);
		cout<<"\""<<a<<"\""<<" tiene "<<sz(a)<<" caracteres\n";
	}
	
}
