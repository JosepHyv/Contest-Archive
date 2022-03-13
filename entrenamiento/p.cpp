//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
typedef unsigned long long int ull;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1 << 30;

void conv( string &a)
{
	ll mini  = 1e6;
	for(char c = '1'; c<='9'; c++)
	{
		ll f = int( a.find(c) );
		if( f > 0 )
			mini = min( mini,ll( a.find(c)) ) ;
	}
	if( mini == 1e6)
	{

		a = "0";
		return;
	}
	string aux = a;

	a = aux.substr(mini);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a , b;
	cin>>a>>b;
	if( a[0] == '0')
		conv(a);
	if( b[0] == '0')
		conv(b);
	if( a == b )
		cout<<"=";
	else if( a.size() > b.size() )
		cout<<">";
	else if( a.size() < b.size() )
			cout<<"<";
	else if( a.size() == b.size())
	{
		bool ok = false;
			for(int c = 0 ; c<a.size(); c++)
				if( a[c] > b[c])
				{
					ok = true;
					break;
				}
				else if(a[c] < b[c])
				{
					ok = false;
					break;
				}
		cout<<(ok?">":"<");
	}


}
