#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;

void DBG(){	cerr<<")\n";}
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <class T > 
void dbgv(vector < T > &x){cerr<<"[ ";for( auto a: x) cerr<<a<<","[a==x.back()]<<" "; cerr<<"]\n"; }


typedef long double ld; 
typedef long long int ll;
typedef unsigned long long int ul;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;


///aqui puede ir algo 


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		int ceros = a;
		int ones = b;
		for(char x: s)
		{
			if( x == '0')
				ceros --;
			if( x == '1')
				ones --;
		}
		// compruebo si hay caracteres que ya no pertenecen 
		// ej 
		// 0 1 
		// 0 <- este 0 no deberia existir
		if( ceros < 0 || ones < 0)
		{
			cout<<"-1\n";
			continue;
		}
		/// si ambos caracteres piden cantidades impares
		// es imposible  crear un palindromo 
		// la minima es un numero impar y un par o 2 pares 
		if(a % 2  && b % 2 )
		{
			cout<<"-1\n";
			continue;
		}

		/// hago los ? sin pareja con el mismo en 
		/// ( a + b ) - c - 1 
		int middle = ( a + b ) / 2;
		bool ok = true;
		string aux = s;
		for(int c = 0 ; c<middle; c++)
		{
			int pos = (a+b) - c -1;
			//dbg(c, pos);
			if( s[c] == '?')
			{
				if( s[pos]!='?')
				{
					if( s[pos] == '1')
						ones--;
					else ceros--;
						s[c] = s[pos];
				}

			}
			else
			{
				if( s[pos] == '?')
				{
					if( s[c] == '1') ones--;
					else ceros--;
					s[pos] = s[c];
				}
			}

		}

		/// emparejo los ?  que tienen pares
		/// hago greedy para poner 0 u 1 
		// si ninguno de los 2 puede poner en los pares, 
		/// no puedo formar palindromo
		for(int c = 0; c<middle; c++)
		{
			int pos = ( a + b ) - c  - 1;
			if( s[c] == '?')
			{
				if( ceros > 1)
				{
					ceros -= 2;
					s[c] = s[pos] = '0';
				}
				else if( ones > 1)
				{
					ones -= 2;
					s[c] = s[pos] = '1';
				}
				else ok = false;
			}

		}

		/// mejor la segura
		/// compruebo que sea palindromo
		/// en el caso de que el tamaño sea impar 
		/// el centro se comprueba despues 

		for(int c = 0; c<middle; c++)
		{
			int pos = ( a + b) - c -1;
			if( s[c] != s[pos])
			{
			//	dbg(s, c,pos, s[c],s[pos]);
				ok = false;
				break;
			}
		}

		/// verifico el centro, pongo 0 u 1 dependiendo de que me quede 
		if(s[middle] == '?')
		{
			if(!ceros && !ones)
				ok = false;
			if( ceros)s[middle] = '0';
			else s[middle] = '1';
		}
		//dbg(aux, s, ceros, ones, ok);
		if( ceros < 0 || ones < 0 ) ok = false;
		if( ok )cout<<s;
		else cout<<-1;
		cout<<"\n";

	}
	
	

	cout<<"\n";
	///uwu - vrm 
}
/* [°-°]  <- tss 
   [./../] <- este mensaje puede cambiar
	
	by Benqi
	COSAS QUE DEBERIAS BUSCAR
	* desbordamientos de int, rango de los arreglos
	* casos especiales ( n = 1? )
	* haz algo en lugar de nada, mantente organizado
	* ESCRIBE COSAS E IDEAS ABAJO
	* NO TE CASES CON UNA IDEA O ENFOQUE

*/

