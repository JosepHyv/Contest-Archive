#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 2e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
ll n, agua;
ll vx[MAXN];
ll ans = 0	;

bool ok( ll k)
{
	ll aux = agua;
	bool temp = false;
	for(int c = k ; c<n; c++)
	{
		ll costo = vx[c] - vx[c-k];
		if( costo <= agua)
		{
			//cerr<<costo <<" "<<agua<<" "<<k<<"\n";
			temp = true;
			break;
		}

	}
	if( temp)
		ans = k;
	return temp;
}

void bsearch(ll low, ll high)
{

	if (low == high)
	   return ;

	ll mid = low + (high-low)/2;

	bool condition =  ok(mid);         			//test for set of 2 elements, no yes! if wrong, change mid

	condition ? low = mid : high = mid-1 ;          // maintain the invariant [low,high)
							// other case, low = mid+1 : high = mid , invariant is (low,high]
	 bsearch(low,high);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n>>agua;
	cin>>vx[0];
	for(int c = 1; c<n; c++)
	{
		cin>>vx[c];
		vx[c] += vx[c-1];
	}

	bsearch(1,n);
	cout<<ans;

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/