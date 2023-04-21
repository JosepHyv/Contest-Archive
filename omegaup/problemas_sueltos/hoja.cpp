#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long int ll;
bool mm[3002][3002];
void pinta(int a,int b, int c, int d )
{
	for(int i = a; i<=d; i++)
		for(int j = b; j<=c; j++)
			mm[i][j] = !mm[i][j];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//ready ? :D
	int arr[4] = {0};
	for(int c = 0 ; c<3; c++)
	{
		for(int d = 0 ; d<4; d++)
			cin>>arr[d];
		pinta(arr[0], arr[1], arr[2], arr[3]);
	}
	for(int c = 0; c<=11; c++)
	{
		for(int d = 0; d<=11; d++)
			cout<<mm[c][d]<<" ";
		cout<<"\n";
	}
	int ans = 0 ;
	for(int c = 0; c<=11; c++)
		for(int d = 0; d<=11; d++)
			if( mm[c][d])
				ans++;
	cout<<ans;
	cout<<"\n";	
	///uwu - vrm 
	
	

}