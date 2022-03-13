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
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1 << 30;

int transforma( char a, char b)
{
	if( a == b)
		return 0;
	int back, frente = back = 0 ;
	if( a > b)
	{
		back = (a - b);
		frente = ('Z' - a) + ( b - ('A'-1));
		return min(back,frente); 
	}
	else
	{
		frente = b - a;
		back = ( a - ('A'-1) ) + ( 'Z' - b);
		return min(frente,back);
	}


}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string genome = "ACTG";
	int n;
	string cade;
	cin>>n>>cade;
	int ans = inf;
	for(int c = 0; c<=cade.size()-4; c++)
	{
		int mini = 0;
		for(int d = 0 ; d<genome.size(); d++)
		{
			//cout<<transforma(cade[c+d], genome[d])<<" "<<cade[c+d]<<" "<<genome[d]<<"\n";
			mini += transforma(cade[c+d], genome[d]);
		}
		ans = min( ans, mini);
	}
	cout<<ans;
}