/*
ID: sonnyak1
LANG: C++14
TASK: 
*/
#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int t,n,k;
	cin>>t>>n>>k;
	while(t--)
	{
		int x;
		cin>>x;
		bool ok = false;
		
		int temp = ( x / n ) * n;

		if( x > temp && !(( x - temp ) % k ))
			ok = true;
		else
		{
			while( temp > 0)
			{
				if( !(( x - temp )% k ))
				{
					ok = true;
					break;
				}
				temp -= n;
			}

		}

		temp = ( x / k ) * k;
		while( temp < x)
			temp += k;
		if( x > temp && !(( x - temp ) % n))
			ok = true;
		else
		{
			while( temp > 0)
			{
				if( !( ( x - temp )  % k ))
				{
					ok = true;
					break;
				}
				temp -= k;
			}
		}

		cout<<(ok?"Si":"No")<<"\n";
	}
}

