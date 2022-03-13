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

	map < string , string > uwu, owo;
	int n;
	cin>>n;
	while( n--)
	{
		string a,b;
		cin>>a>>b;
		uwu[a] = b;
		owo[b] = a;
	}

	string t;
	getline( cin, t );
	getline( cin, t);
	vector< string > ans;

	string pal = "";
	for(char v: t)
	{
		if( v == ' ')
		{
			//cout<<pal<<"\n";
			ans.push_back(pal);
			pal = "";
		}
		else
			pal += v;
	}

	ans.push_back(pal);
	/*for(auto v: ans)
		cout<<v<<" ";
	cout<<"\n";*/

	for(int c = 0 ; c<sz(ans); c++) 
	{
		string aux = ans[c];
		string minima = ans[c];
		while(uwu.find(aux) != uwu.end())
		{

			//cout<<aux<<" tiene a -> "<< uwu[aux]<<"\n";
			if( sz( uwu[aux]) < sz(minima))
				minima = uwu[aux];
			else
				if( uwu[aux] == minima)
					if( uwu[aux] < minima)
						minima = uwu[aux];
			aux = uwu[aux];
		
		}
		ans[c] = minima;
		aux = ans[c];
		while(owo.find(aux) != owo.end())
		{

			//cout<<aux<<" tiene a -> "<< owo[aux]<<"\n";
			if( sz( owo[aux]) < sz(minima))
				minima = owo[aux];
			else
				if( owo[aux] == minima)
					if( owo[aux] < minima)
						minima = owo[aux];
			aux = owo[aux];
		}
		ans[c] = minima;
	}

	for( auto v: ans)
		cout<<v<<" ";
	cout<<"\n";


}

