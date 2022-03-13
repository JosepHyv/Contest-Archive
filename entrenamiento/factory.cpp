#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;

int main () 
{
	ll a , b;
	cin>>a>>b;
	if( (a * ( 1 << (int)log2(b ))) % b == 0  )
		cout<<"Yes";
	else
		cout<<"No";

}