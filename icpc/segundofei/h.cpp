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

int operation(int a, int b, char x)
{
	if( x == '-')
		return (a-b);
	if( x == '+')
		return (a+b);
	return (a*b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	stack < int > sol;
	queue < char > aux;
	int n;
	cin>>n;
	while( n--)
	{
		char x;
		cin>>x;
		if( x >= '0' && x <='9')
			sol.push((int) x-48);
		else
		{
			aux.push(x);
			while( sz(sol) >= 2 && sz(aux))
			{
				int n1 = 0, n2 = 0;
				if(sz(sol))
				{
					n1 = sol.top();
					sol.pop();
				}
				if( sz( sol))
				{
					n2 = sol.top();
					sol.pop();
				}

				sol.push(operation(n2,n1, aux.front()));
				aux.pop();
			}
		}
	}

	while( sz(sol) >= 2 && sz(aux))
			{
				int n1 = 0, n2 = 0;
				if(sz(sol))
				{
					n1 = sol.top();
					sol.pop();
				}
				if( sz( sol))
				{
					n2 = sol.top();
					sol.pop();
				}

				sol.push(operation(n2,n1, aux.front()));
				aux.pop();
			}

	if( sz(sol))
		cout<<sol.top();
}

