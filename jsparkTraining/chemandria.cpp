#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
#define raya cerr<<"====================\n";
using namespace std;
 
void DBG(){	cerr<<")\n";}
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<typename T>
ostream & operator <<(ostream &os, const pair < T, T>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
void press(int n = 15){	cout<<setprecision(n)<<fixed;}
void setIO( string name = "")
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	if(sz(name))
	{
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}
 
typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;
 
 
///aqui puede ir algo 

int chemandria[MAXN];
int ini, fin; 

int main()
{
 	setIO();
 	// A)push(x) Inserta x al final
 	// 
 	// B)pop_front() Elimina e imprime el elemento al frente del conjunto
 	// 
 	// C)pop_back() Elimina e imprime el elemento al final del conjunto
 	// 
 	// D)query() Imprime el conjunto de datos en orden creciente (sin perder el orden original)
 	// 
 	// E)size() Imprime cuantos elementos quedan en el conjunto.
	int n;
	cin>>n;
	ini = fin = 0;
	while(n--)
	{
		char op;
		int x;
		cin>>op;
		if(op == 'A')
		{
			cin>>x;
			chemandria[fin] = x;
			fin++;
		}
		else if (op == 'B')
		{
			if(ini < fin)
			{
				cout<<chemandria[ini];
				ini++;
				cout<<"\n";
			}
			
		}		
		else if (op == 'C')
		{
			if(fin > ini)
			{
				cout<<chemandria[fin-1];
				fin--;
				cout<<"\n";
			}
		}		
		else if (op == 'D')
		{
			priority_queue <int> pq;

			for(int c = ini; c<fin; c++)
			{
				pq.push(-chemandria[c]);
				// pq.push(-1 * chemandria[c]);
			}

			while(pq.size()) // !pq.empty()
			{
				cout<<-pq.top()<<' '; /// pq.top() * -1
				pq.pop();
			}
			cout<<"\n";
			 
		}		
		else if (op == 'E')
		{
			int elementos = fin - ini;
			if(elementos <= 0)
				cout<<0;
			else cout<<elementos;
			cout<<"\n";
		}
	}
 	
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benq
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE
 
*/
