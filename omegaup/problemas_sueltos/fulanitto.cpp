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
int vx[100002];
int binaria(int i, int f, int x )
{
	//cerr<<i<<" "<<f<<" "<<x<<" "<<(i+f)/2<<"\n";
	if(  i >= f   )
		return i;
	int mm =  ( i + f) / 2;
	if( vx[mm] > x )
		f = mm;
	else i = mm+1;
	return binaria(i,f,x);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>k>>n;
//	vector < ll >vx(n);
	cin>>vx[0];
	for(int c = 1 ; c<n; c++)
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}
	for(int c  = 0 ; c<k; c++)
	{
		int x;
		cin>>x;
		int pos = binaria(0,n-1, x);
		cout<<pos<<" "<<abs(x - vx[pos-1])<<"\n";
	}

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/