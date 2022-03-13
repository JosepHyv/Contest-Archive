#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;

int mm[102][102];
int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	cin>>n;
	for(int c = 0 ; c<n; c++)
		for(int d = 0 ; d<n; d++)
			cin>>mm[c][d];
	bool ok = true;
	int aux = mm[0][0];
	for(int c = 0, d = n-1 ; c<n; c++, d--)
		if( aux != mm[c][c])
			ok = false;

	cout<<( ok ? "SI": "NO");
}

