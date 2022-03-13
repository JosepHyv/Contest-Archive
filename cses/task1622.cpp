#pragma GCC optimize ("-O3")
#pragma GCC optimize ("unroll-loops")
#include<set>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>
#include<stdio.h>
#include<climits>
#include<cstdlib>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#define f first 
#define s second
#define all(x) x.begin() , x.end()
#define mcm(a,b) a*b/__gcd(a,b);
#define pb(x) push_back(x)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vll;
const ll mod = ll( 1e9)+7;
const ll MAXN = ll( 1e6)+3;
const ll INF = (1ll << 32 );

int t,n,k;

void solve()
{
	
	return;
}

int main()
{
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	string a;
	cin>>a;
	vector < string > ans;
	sort(all(a));
	ans.pb(a);
	while( next_permutation( all(a) ))
		ans.pb(a);
	sort(all(ans));
	cout<<ans.size()<<"\n";
	for(auto v:ans)
		cout<<v<<"\n";

}
