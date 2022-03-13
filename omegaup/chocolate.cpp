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
int n;
int vx[100002];
bool ok(int  m)
{
	//cerr<<"probando "<<m<<"\n";
	ll sobra = 0 ;
	for(int c = 0 ; c<n; c++)
	{
		if( (vx[c] + sobra )< m)
		{
	//		cerr<<m<<" no jalo\n";
			return false;
		}
		sobra = (vx[c] + sobra ) - m;
	}
	//cerr<<m<<" jalo\n";
	return true;
}

int binaria(int i, int f )
{
	int mm = 0 ;
	while( i < f )
	{
		mm = ( i +f ) / 2;
		if( ok (mm) )
			i = mm+1;
		else f = mm;
	}
	return i-1;
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int c = 0 ; c<n; c++)
		cin>>vx[c];

	cout<<binaria(1,1e9);
	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/


