#include<bits/stdc++.h>
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
template<class H, class... T > 
void DBG( H h, T... t){cerr << h;if( sizeof...(t))cerr<<", ";DBG(t...);}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] = ( ", DBG(__VA_ARGS__)
template <typename T>
ostream & operator <<(ostream &os, const vector < T >&v){os << "[";
for(int c = 0 ; c<sz(v); c++){if(c > 0) os<<","; os<<v[c];}
return os <<"] ";}
template<typename T>
ostream & operator <<(ostream &os, const pair < T, T>&sol ){
os<<"("<<sol.fi<<", "<<sol.se;return os <<") ";}

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
	cout<<setprecision(15)<<fixed;
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/

	/*
	byr (Año de nacimiento)
	iyr (Año de emisión)
	eyr (Año de vencimiento)
	hgt (Altura)
	hcl (Color de pelo)
	ecl (Color de los ojos)
	pid (Passport ID)
	cid (ID de país)

	+-----------+-------------------------+-------+
| RFC       | nombre                  | CP    |
+-----------+-------------------------+-------+
| VAGK03214 | Karen Valencia Garza    | 91127 |
| PAMF14785 | Fernando Paez Muñoz     | 91127 |
| MEJG25896 | Gabriela Mendez Jimenez | 91127 |
| DIPH36985 | Hector Diaz Portilla    | 91127 |
| VAGK03214 | Karen Valencia Garza    | 91503 |
| PAMF14785 | Fernando Paez Muñoz     | 91503 |
| MEJG25896 | Gabriela Mendez Jimenez | 91503 |
| DIPH36985 | Hector Diaz Portilla    | 91503 |
| VAGK03214 | Karen Valencia Garza    | 91506 |
| PAMF14785 | Fernando Paez Muñoz     | 91506 |
| MEJG25896 | Gabriela Mendez Jimenez | 91506 |
| DIPH36985 | Hector Diaz Portilla    | 91506 |
| VAGK03214 | Karen Valencia Garza    | 92321 |
| PAMF14785 | Fernando Paez Muñoz     | 92321 |
| MEJG25896 | Gabriela Mendez Jimenez | 92321 |
| DIPH36985 | Hector Diaz Portilla    | 92321 |
| VAGK03214 | Karen Valencia Garza    | 93457 |
| PAMF14785 | Fernando Paez Muñoz     | 93457 |
| MEJG25896 | Gabriela Mendez Jimenez | 93457 |
| DIPH36985 | Hector Diaz Portilla    | 93457 |
| VAGK03214 | Karen Valencia Garza    | 91534 |
| PAMF14785 | Fernando Paez Muñoz     | 91534 |
| MEJG25896 | Gabriela Mendez Jimenez | 91534 |
| DIPH36985 | Hector Diaz Portilla    | 91534 |
+-----------+-------------------------+-------+


*/


	

	cout<<"\n";
	///uwu - vrm - Vanessa Rodriguez Medina <3
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

