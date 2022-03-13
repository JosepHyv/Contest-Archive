#include<bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef set < int > si;
typedef vector< int > vi;
typedef long long int ll;
typedef set < string > ss;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef unsigned long long int ull;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int v[18];
	for (int i = 0 ;i < 18 ; i++)
		cin>>v[i];
	int res = 0;
	cin.ignore();
	for (int i = 0 ;i < 18 ; i++) {
		string s;
		cin>>s;
		if (s == "par")
			res+=v[i];
		if (s == "hole") {
			cin>>s;
			cin>>s;
			res+=1;
		}
		if (s == "condor")
			res+= (v[i]-4);
		if (s == "albatross")
			res+= (v[i]-3);
		if (s == "eagle")
			res+= (v[i]-2);
		if (s == "birdie")
			res+= (v[i]-1);
		if (s == "bogey")
			res+= (v[i]+1);
		if (s == "double") {
			res+=(v[i]+2);
			cin>>s;
		}
		if (s == "triple") {
			res +=(v[i]+3);
			cin>>s;
		}
		}
	cout<<res<<"\n";
	
	
}
