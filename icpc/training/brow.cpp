#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	int mins = 0 , mays = 0 ;
	for( auto v: s)
		if( v >= 'a' && v <='z')
			mins++;
		else mays++;
	if( mins >= mays)
		for( auto v: s)
			cout<<char(tolower(v));
	else
		for( auto v: s)
			cout<<char(toupper(v));
}

