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
	int n;
	cin>>n;
	while( n--)
	{
		double a;
		cin>>a;
		if( a < 34)
			cout<<"Too cold, please try again.";
		else if( 34 <= a && a <= 35.5 )
			cout<<"Take a hot bath.";
		else if( 35.5 < a && a <= 38)
			cout<<"Rest if feeling unwell.";
		else if( 38 < a && a <=39)
			cout<<"Take some medicine.";
		else if( 39 < a && a <= 41)
			cout<<"Take a cold bath and some medicine.";
		else if( 41 < a && a <= 46.1)
			cout<<"Go to the hospital.";
		else if( 46.1 < a && a <= 50)
			cout<<"Congrats, you have a new world record!";
		else 
			cout<<"Too hot, please try again.";

		cout<<"\n";
	}
	

//	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

