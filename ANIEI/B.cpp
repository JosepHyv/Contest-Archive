#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();
    int n,b;
    while(cin>>n>>b && n > 0 && b > 0 )
    {
	    int sum=0;
	    int w;
	    for(int c=1;c<=n;c++)
	    {
	        cin>>w;
	        sum+=w;
	    }
	    cout<<b/sum;
    	cout<<"\n";
    }
    return 0;
}