#include<bits/stdc++.h>
#define sz(x) (int)(x.size())
using namespace std;

typedef long long int ll;
typedef unsigned long long int lld;
typedef long double ld;

bool check(vector < string > arr, string sub)
{
	bool ok = true;

	for(string a : arr)
	{
		auto pos = a.find(sub);
		if( pos == string::npos)
		{
			ok = false;
			break;
		}
	}
	return ok;
}

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

	set < string > secuencias;
	for(int c = 1 ; c<=sz(vx[0]); c++)
	{
		for(int x = 0 ; x<=sz(vx[0]) - c; x++)
		{
			string aux = "";
			for(int y = 0; y<c; y++)
				aux += vx[0][x + y];
		//	cout<<aux<<" "<<sz(aux)<<"\n";
			secuencias.insert(aux);
		}
	}

	string ans = "";
	for(string cades : secuencias)
		if(check(vx, cades))
		{
			if( sz(ans) < sz(cades))
				ans = cades;
		}

	cout<<sz(ans);
	cout<<"\n";
}