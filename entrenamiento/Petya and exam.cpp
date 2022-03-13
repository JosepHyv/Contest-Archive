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
constexpr ll inf = 1ll << 32;
bool gods[300] = {0};
bool pass( string a, string b , bool arr[])
{
	if( a.size() != b.size() )
		return false;
	for(int c = 0 ; c<a.size(); c++)
	{
		if( a[c] != b[c])
			if( a[c] != '?')
				return false;
		else
			if( !arr[b[c]])
				return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string a,b;
	cin>>a>>b;
	for(auto v:a)
		gods[v] = true;
	//gods[32] = true;
	auto f = b.find('*');
	int n;
	cin>>n;
	while(n--)
	{
		string q;
		cin>>q;
		if( q.size() < b.size() -1 )
			cout<<"NO";
		else if( f == string :: npos)
		{
			if( pass(b, q, gods))
				cout<<"YES";
			else
				cout<<"NO";
		}
		else
		{
			bool ok = true;
			ok &= pass(b.substr(0,f), q.substr(0,f),gods);
			reverse(all(q));
			reverse(all(b));
			f = b.size() - f -1;
			ok &= pass(b.substr(0,f), q.substr(0,f),gods);
				
			reverse(all(q));
			reverse(all(b));
			f = b.size() - f -1;
			for(int c = f; c<q.size() - ( b.size() - f - 1 ); c++) 
				ok &= !gods[q[c]];
			if( ok)
				cout<<"YES";
			else
				cout<<"NO";
		}
		cout<<"\n";
	}
	
}