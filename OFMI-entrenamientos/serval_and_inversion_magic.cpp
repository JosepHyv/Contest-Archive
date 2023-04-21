#include<iostream>
using namespace std;



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int segmentos = 0;
		for(int c = 0; c<n/2; c++)
		{
			if(s[c] != s[n - c - 1] && !segmentos)
				segmentos = 1;
			else if(s[c] == s[n - c - 1] && segmentos == 1)
				segmentos = 2;
			else if(s[c] != s[n - c - 1] && segmentos == 2)
				segmentos = 3;
		}

		if(segmentos <= 2 ) cout<<"yes";
		else cout<<"no";
		cout<<'\n';
	}
}
