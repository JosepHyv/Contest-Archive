#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 
int algoritmos[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x;
	cin>>n>>x;
	for(int c = 0; c<n; c++)
	{
		cin>>algoritmos[c];
	}

	sort(algoritmos, algoritmos + n);

	int sum = 0;
	int c = 0;
	while(c < n && sum + algoritmos[c] <= x) {
		sum += algoritmos[c]; 
		c++;
	}
	cout<<c;
	cout<<"\n";
}

