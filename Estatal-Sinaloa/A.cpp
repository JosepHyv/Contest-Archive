#include<bits/stdc++.h>
#define fi first
#define se second
#define sz(x) ((int) (x.size()))
#define all(x) (x.begin(), x.end())
using namespace std;

typedef long long int ll;
constexpr int inf = 2e9;
constexpr int MAXN = 1e6+2;

int n;
vector < string > ordena;
void solve(string a, int t)
{
	if(  sz(a) > t ) return;
	if( sz(a) == t )
	{
		string aux  = "";
		if( n  % 2 )
		{
			aux = a.substr(0,sz(a)-1);
			reverse(aux.begin(), aux.end());
			ordena.push_back(( a + aux));
		}
		else
		{
			aux = a;
			reverse(aux.begin(), aux.end());
			ordena.push_back((a+aux));
		}
	}

	solve('0' + a, t);
	solve('1' + a, t);

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//cerr.tie(NULL);
	//cout.tie(NULL);
	//ready ? :D
	
	cin>>n;
	string s;
	int x = n;
	x /= 2;
	if( n % 2 ) x++; 
	solve(s,x);
	sort(ordena.begin(), ordena.end());
	for(string a: ordena)
		cout<<a<<"\n";
	cout<<"\n";	
	///uwu - vrm - Vanessa Rodriguez Medina <3
	
}
/*
	
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE
*/