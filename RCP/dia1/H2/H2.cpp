#include<bits/stdc++.h>
#define sz(x) ((int)(x.size()))
using namespace std;

typedef long long int ll;
typedef unsigned long long int lld;
typedef long double ld;

string lcs(string a, string b)
{

	ll ans = 0 ;
	int dp[sz(a)+1][sz(b)+1];
	for(int c = 0 ; c<=sz(a); c++)
		for(int d = 0 ; d<= sz(b); d++)
			dp[c][d] = 0;

	int posf =  sz(a);



	for(int c = 1; c<=sz(a); c++)
		for(int d = 1 ; d<=sz(b); d++) 
		{
			if( a[c -1 ] == b[d-1])
			{
				dp[c][d] = dp[c-1][d-1] + 1; 
				if( dp[c][d] > ans )
				{
					ans = dp[c][d];
					posf = c;
				}
			}

		}
	return a.substr(posf - ans, ans);

}

// NewSite:GeeksQuiz.com
// OldSite:GeeksforGeeks.org

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	int t;
	cin>>t;
	vector < string > vx(t);
	for(string &a: vx)
		cin>>a;
	if(t == 1 )
	{
		cout<<sz(vx[0])<<"\n";
		return 0;
	}
	vector < string > subs;
	for(int c = 0 ; c<t; c++)
	{
		for(int d = c+1; d<t; d++)
		{
			subs.push_back(lcs(vx[c], vx[d]));
		}
	}
	string ans = "";
	for(string  a: subs)
	{
		string aux = a;
		for(string b: vx)
			aux = lcs(aux, b);
		if( sz(aux) > sz(ans)  )
			ans = aux;
	}
//	cerr<<ans<<"\n";
	cout<<sz(ans);

	cout<<"\n";
}