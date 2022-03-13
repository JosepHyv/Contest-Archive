#include<iostream>
using namespace std;

int a1[102];
int a2[102];
int suma[102];
int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	
	for(int c = 0 ; c<n; c++)
		cin>>a1[c];
	
	for(int c = 0 ; c<n; c++)
		cin>>a2[c];

	for(int c = 0 ; c<n; c++)
		cout<<a1[c] + a2[c]<<" ";


}