#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
vector < int > grf[maxn];
vector < int > ans;

void solve(int a )
{
	ans.push_back(a);
	if( !grf[a].size()) return;
	for( int c: grf[a]) solve(c);
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D

	int n;
	cin>>n;
	while( n--)
	{
		int a,b;
		cin>>a>>b;
		grf[a].push_back(b);
	}
	int x;
	cin>>x;
	solve(x);
	cout<<ans.size()<<"\n";
	for(int a:ans)
		cout<<a<<" ";
	
	cout<<"\n";	
	///uwu - vrm 
	

}