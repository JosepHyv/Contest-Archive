#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
#define press(x)  setprecision(x)<<fixed
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/

	int n;
	cin>>n;
	priority_queue < ll , vector < ll  > ,greater < ll >  > cl;
	ll ans  = -inf;
	while( n--)
	{
		char op;
		ll x;
		cin>>op;
		if( op == 'R')
		{
			cin>>x;
			cl.push(x);
			ans = max( ans, x);
		}
		if( op == 'S')
		{
			if(sz(cl) < 3 )
				cout<<"NO HAY SUFICIENTES PUNTAJES\n";
			else
			{
				ll a,b,c;
				a = cl.top();
				cl.pop();
				b = cl.top();
				cl.pop();
				c = cl.top();
				cl.pop();
				cout<<a<<" "<<b<<" "<<c<<"\n";
				cl.push(a);
				cl.push(b);
				cl.push(c);
			}
		}

		if( op == 'B')
			if( sz(cl))
				cl.pop();
	}

	if(sz(cl))
		cout<<"EL PUNTAJE MAS ALTO FUE "<<ans;
	else
		cout<<"NO HUBO GANADOR\n";



}