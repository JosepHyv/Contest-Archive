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

///aqui puede ir algo 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	vector < int > vx(n);
	vector < int > cuenta(8);
	for(int c = 0 ; c<n; c++ ) 
	{
		cin>>vx[c];
		cuenta[vx[c]]++;
	}
	if( cuenta[5] || cuenta[7])
	{
		cout<<-1;
		return 0;
	}
	else
	{

		int total = 0;
		string ans[] = {"1 2 4", "1 2 6", "1 3 6"};
		int h,j,k;
		h = cuenta[4];
		j = cuenta[2] - h;
		k = cuenta[3];
		if( j >= 0 && cuenta[1] == h + j+ k && cuenta[2] == h + j && cuenta[3] == k && cuenta[4] == h && cuenta[5] == 0 && cuenta[6] == j + k && cuenta[7] == 0)
		{
			for(int c = 0; c<h; c++) 
				cout<<ans[0]<<"\n";
			for(int c = 0; c<j; c++)
				cout<<ans[1]<<"\n";
			for(int c = 0 ; c<k; c++)
				cout<<ans[2]<<"\n";
		}
		else cout<<-1;
	}

	cout<<"\n";
	///uwu - vrm 
}

/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/