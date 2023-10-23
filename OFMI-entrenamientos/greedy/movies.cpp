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
 
// pair < int , int > peliculas[MAXN];

// struct movie{
// 	int inicio;
// 	int final;

// 	bool operator < (const movie &a) const{ //sobrecarga de operadores
// 		if(a.final != final)
// 			return a.final < final;
// 		return a.inicio < inicio;
// 	}
// };

pair <int , int > peliculas[MAXN]; 
 Benjamin Qi
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	for(int c = 0; c<n; c++)
		cin>>peliculas[c].second >> peliculas[c].first;
        ///// inicio de las pelis    el final de las pelis
	sort(peliculas, peliculas + n);
	int ans = 0;
	int horaFinal = -1;
	for(int c = 0; c<n; c++)
	{
		// cout<<peliculas[c].second << ' ' << peliculas[c].first << '\n';
		if(peliculas[c].second >= horaFinal)
		{
			horaFinal = peliculas[c].first;
			ans++;
		}
	}
	cout<<ans;
	cout<<"\n";
}




/*


- Tomar la pelicula que comienza más pronto
1    5  <--- 1
3    6 X 
6    8  <---- 2
7    10

 2 
--------

falla en este otro 


1    10  <----- 1
2     5 X
5     8 X
8    11 X

No optima -> 1
optima ----> 3

------------
- Tomar la pelicula que termina más pronto

1    5  <--- 1
3    6 X 
6    8  <---- 2
7    10

2

--------


2     5 <--- 1
5     8 <--- 2
1    10 X
8    11 <--- 3


La optima: 3 


3
3 5
4 9
5 8
inicios[]
finales[]

sort(inicios, inicios + n);
sort(finales, finales + n);


3 4 5 
5 8 9 

3 5 
5 8 
4 9 
*/