//PROBLEM LINK:https://codeforces.com/problemset/problem/314/B
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

struct data
{
	string prefix;
	int concatena;
};

bool pertenencia( data a, data b)
{
	if( int ( a.concatena * int  a.prefix.sixe() ) < int ( b.concatena * int b.prefix.size()) )
		return false; 

	if( b.prefix.find(a) != string::npos)
		return true;

	

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	data n,m;
	cin>> n.concatena >> m.concatena;
	cin>> n.prefix >> m.prefix;

	if(pertenencia(n,m))
	{

	}
	else
		cout<<0;
}