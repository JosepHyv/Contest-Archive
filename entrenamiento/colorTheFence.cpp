#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll n;
	cin>>n;
	vector < pair < int , int > > pintura(9);
	vector < pair < int , int > > pinaux(9);
	ll suma = 0 ;
	for(int c = 0 ; c<9; c++)
	{
		cin>>pintura[c].fi;
		pintura[c].se = -(c+1);
		suma += pintura[c].fi;
		pinaux[c] = pintura[c];
		pinaux[c].se = abs(pinaux[c].se);
	}
	sort(all(pintura));
	if( pintura[0].fi > n )
		cout<<-1;
	else
	{
		for(int c = 0; c<9; c++)
			pintura[c].se = abs(pintura[c].se);
		int ans[12] = {0};
		ans[ pintura[0].se ] = n / pintura[0].fi;
		n %= pintura[0].fi;
		int aux = ans[pintura[0].se];
		for(int c = 0 ; c<aux; c++)
		{
			for(int d = 8; d >=0; d--)
			{
				if( pintura[0].fi + n >= pinaux[d].fi)
				{
					n = ( n + pintura[0].fi) % pinaux[d].fi;
					ans[pintura[0].se]--;
					ans[d+1]++;
					break;
				}
			}
		}
		//cerr<<"sigo vivo\n";
		for(int c = 9; c>=1; c--)
			while(ans[c]--)
				cout<<c;

	}

	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

