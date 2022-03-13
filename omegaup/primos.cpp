#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int )x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e7+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
vector < bool > vs(MAXN);
vector < int  > criba;
void gen(ll n)
{
	vs[0] = vs[1] = true;
	for(int c = 4; c<n; c+=2)
		vs[c] = true;
	for(int c = 3; c<sqrt(n); c+=2)
		if(!vs[c])
			for(int d = c*c; d<n; d+=c)
					vs[d] = true;
	for(ll c = 2; c<n; c++)
		if(!vs[c])
			criba.pb(c);
}


bool binaria(ll i, ll f, ll x)
{
	ll med = 0 ;
	while( i <= f )
	{
		med = i + ( f - i ) / 2;
		if( criba[med] == x)
			return 1;
		if( criba[med] > x )
			f = med -1;
		else i = med +1;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k;
	cin>>n>>k;
	gen(n);

	for(ll a: criba)
	{
		ll tam = sz(criba);
		ll num = a+k;
		if( binaria(0, tam, num ))
			cout<<a<<" "<<num<<"\n";
	}
	

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/