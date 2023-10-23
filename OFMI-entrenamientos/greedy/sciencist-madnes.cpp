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
 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string a,b;
	cin>>n>>a>>b;

	int abierto_a_grupo = false;
	int ans = 0;
	for(int c = 0; c<n; c++)
	{
		cout<<"A: "<<a[c]<<" B: "<<b[c]<<' '<<"Respuesta: ";
		if( a[c] != b[c] && !abierto_a_grupo)
		{
			abierto_a_grupo = true;
			ans = ans + 1;
			cout<<ans<<" abierto_a_grupo: "<<abierto_a_grupo<<'\n';
		}
		else{
		 abierto_a_grupo = false; 
			cout<<" abierto_a_grupo: "<<abierto_a_grupo<<'\n';

		}
	}
	cout<<ans;
	cout<<"\n";
}


// 7
// GHHHGHH
// HHGGGHH



/*
G G H H
H G
1 2 
*/




/*

6 15
4 3 8 4 7 3

3 3 4 4 7 8 


- ir tomando los algoritmos más faciles hasta que se agite el tiempo 
*/