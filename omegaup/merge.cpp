#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define dbg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

///aqui puede ir algo 
int vx[1002];
void merge( int i, int f, int arr[])
{
	queue < int > left, right;
	int mitad = ( i + f ) / 2;

	for(int c = i; c<=mitad; c++)
		left.push(arr[c]);

	for(int c = mitad+1; c<=f; c++)
		right.push(arr[c]);
	
	int cc = i;
	while( !left.empty() && !right.empty())
	{
		if( left.front() < right.front())
		{
			arr[cc] = left.front();
			cc++;
			left.pop();
		}
		else
		{
			arr[cc] = right.front();
			cc++;
			right.pop();	
		}
	}

	while( !left.empty())
	{
		arr[cc] = left.front();
		left.pop();
		cc++;
	}

	while( !right.empty())
	{
		arr[cc] = right.front();
		right.pop();
		cc++;
	}

}

void sort( int i, int f, int arr[] )
{
	if( i < f )
	{
		int mitad = ( i + f )  / 2;
		sort(i, mitad, arr);
		sort(mitad+1, f, arr);
		merge(i,f, arr);
		return;
	}
	//return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n;
	cin>>n;

	for(int c = 0 ; c<n; c++)
		cin>>vx[c];

	sort(0,n-1, vx);
	for(int c = 0 ; c<n; c++)
		cout<<vx[c]<<" ";

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar

*/

