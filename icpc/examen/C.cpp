#include<bits/stdc++.h>
using namespace std;

string t;
int ans;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>t;

	for(auto &v: t)
		v = toupper(v);
	for(int c = 0 ; c<(int)t.size(); c+=3)
		if( t[c] != 'P' )
			ans++;

	for(int c = 1 ; c<(int)t.size(); c+=3)
		if( t[c] != 'E' )
			ans++;

	for(int c = 2; c<(int)t.size(); c+=3)
		if( t[c] != 'R')
			ans++;

	cout<<ans<<"\n";
	return 0;


}