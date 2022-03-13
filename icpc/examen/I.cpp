#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int p,h,o;
	cin>>p>>h>>o;
	int m = o - p;
	if (m < h)
		cout<<"Hunters win!"<<"\n";
	else
		cout<<"Props win!"<<"\n";
	return 0;
	
}
