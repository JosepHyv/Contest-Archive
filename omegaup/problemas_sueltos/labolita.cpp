#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

// void solve() {}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	//cin>>t;

	/*
	1. la 1 por la 2
	2. la 1 por la 3
	3. la 1 por la 4
	4. la 2 por la 3
	5. la 2 por la 4
	6. la 3 por la 4
	*/
	cin>>t;
	int n;
	cin>>n;
	bool bolita[10]={false};
	bolita[t] = true;
	while(n--)
	{	
		int x;
		cin>>x;
		if( x == 1 )
			swap(bolita[1], bolita[2]);
		if( x == 2)
			swap(bolita[1], bolita[3]);
		if( x == 3)
			swap(bolita[1], bolita[4]);
		if( x == 4)
			swap(bolita[2], bolita[3]);
		if( x == 5)
			swap(bolita[2], bolita[4]);
		if( x == 6)
			swap(bolita[3], bolita[4]);
		///uwu
	}
	for(int c = 1; c<=4; c++)
		if( bolita[c])
			cout<<c;
}
