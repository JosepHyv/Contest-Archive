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

int vx[MAXN];
int n;

bool ok(ll m)
{
	//cout<<"Estoy probando el "<<m<<"\n";
	ll acarreo = 0 ;
	for(int c = 0 ; c<n; c++ ) 
	{
	
		if( vx[c] + acarreo < m)
		{
			//cout<<m<<" no jalo\n";
			return false;
		}
		acarreo = vx[c]+acarreo - m;
	}
	//cout<<m<<" jalo\n";
	return true;
}

ll bins(ll i, ll f)
{
	//cout<<i<<" "<<( i+f) / 2<<" "<<f<<"\n";
	if( i == f )
		return f-1;
	ll medio = ( i+f) / 2;
	if( ok(medio) )
		return bins( medio+1, f);
	return bins(i, medio);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	cin>>n;
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];

	cout<<bins(1,inf);
}