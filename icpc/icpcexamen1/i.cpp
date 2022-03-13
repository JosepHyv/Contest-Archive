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

	int t;
	cin>>t;
	int cases = 0;
	while( t--)
	{
		string s;
		cin>>s;
		int cumple = 0 ;
		char especial[] = {'.', '#','$', '%', '/', '(', '&', ')'};
		bool mins = false, may = false;
		bool atnumber = false;
		for(auto v: s)
		{
			if( v>= 'a' && v <= 'z')
				mins = true;
			if( v >= 'A' && v<='Z')
				may = true;
			if( v >= '0' && v <= '9')
				atnumber = true;
		}	

		if( mins )
			cumple++;
		if( may)
			cumple++;

		if( sz(s) >= 10 )
			cumple++;

		bool consecutivos = false;
		vector < int > conse;
		for(auto v: s)
			if( v >= '0' && v <='9')
				conse.pb(v);

		for(int c = 0 ; c<sz(conse)-1; c++)
			if( conse[c] == (conse[c+1]+1))
				consecutivos = true;

		if( atnumber && !consecutivos)
			cumple++;
			

		bool especiales = false;
		for( auto v: s)
		{
			for(int c = 0 ; c<8; c++)
				if( v == especial[c] )
					especiales = true;

		}

		if( especiales)
			cumple++;

		if( cumple == 5 )
			cout<<"Assertion number #"<<cases+1<<": Strong\n";
		else if( cumple == 4 )
				cout<<"Assertion number #"<<cases+1<<": Good\n";
			else if( cumple == 3)
				cout<<"Assertion number #"<<cases+1<<": Week\n";
			else cout<<"Assertion number #"<<cases+1<<": Rejected\n";
			cases++;


	}

}

