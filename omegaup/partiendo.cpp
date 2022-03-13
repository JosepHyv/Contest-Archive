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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	/// 200 ms da con 10^4 no ? 
	int n;
	cin>>n;
	ll ans = 0;
	for(int c = 1; c<=(2*n)-1; c+=2)
		ans += c;
	cout<<(2*ans) - (2*n) + 1; 

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/