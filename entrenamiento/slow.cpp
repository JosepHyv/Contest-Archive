#include<bits/stdc++.h>
using namespace std;

int a,b;
int fib( int n)
{ 
	int fis[n+2];
	fis[0] = a;
	fis[1] = b;
	for(int c = 2; c<=n; c++)
		fis[c] = fis[c-1]^fis[c-2];
	for(int c = 0; c<=n; c++)
		cout<<fis[c]<<" ";
	return fis[n];
}

int main()
{
	int n;
	cin>>a>>b>>n;
	fib(n);
}
