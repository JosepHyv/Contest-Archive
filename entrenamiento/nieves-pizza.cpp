//PROBLEM LINK:https://omegaup.com/arena/problem/OMI2014LENGUAJE3/#problems
//PROBLEM PATH:/home/josephy/Escritorio/entrenamiento/nieves-pizza.cpp
#include<bits/stdc++.h>
#define fi first 
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
using namespace std;

typedef double db;
typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < bool > mrk;
typedef pair < ll, ll > pll;
typedef pair < int , int > pii;
typedef vector< vector< ll >> adj;
typedef unsigned long long int ull;
constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr ll inf = 1 << 30;

int n;
int op,x,y;
pii monotone[MAXN], secuencia[MAXN];
pii max_pizza = {0,0};
int mtop, seize;
vector < pii > maximos;

int bins( int i, int f ,  int x)
{
	if( i == f )
		return f;
	int mm = ( i+f) / 2;
	if( monotone[mm].se == x ) 
		return mm;
	else if( monotone[mm].se > x)
		return bins(i, mm, x);
	else
		return bins( mm+1, f, x);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>n;
	while(n--)
	{
		cin>>op;
		if(op == 0 )
		{
			cout<<mtop<<"\n";
		}
		else if ( op == 1)
		{
			//cout<<"antes -> "<<seize<<" "<<mtop<<"\n";
			cin>>secuencia[seize++].fi;
			secuencia[seize-1].se = seize-1;
			if( secuencia[seize-1].fi >= max_pizza.fi)
			{
				maximos.pb(max_pizza);
				max_pizza = secuencia[seize-1];
			}

			while(mtop > 0 && secuencia[seize-1].fi >= monotone[mtop-1].fi)
				mtop--;
			monotone[mtop++] = secuencia[seize-1];

			//cout<<"despues -> "<<seize<<" "<<mtop<<"\n";

		}
		else if( op == 2)
		{
			/*cout<<"el vector de maximos contiene \n";
			for( auto v: maximos)
				cout<<v.fi<<" "<<v.se<<"\n";*/
			cin>>x;
			seize  = (seize -1) - x;
			seize++;
			if( seize-1 == max_pizza.se)
			{
				//cout<<"la eliminacion quedo justo en el maximo\n";
				mtop = 1;
				continue;
				
			}
			else if( seize-1 < max_pizza.se)
			{
				//cout<<"la eliminacion paso a la pizza maxima, reconstruir\n";
				mtop = 0;
				max_pizza = maximos.back();
				//cout<<"los nuevos recogidos son -> "<<max_pizza.fi<<" "<<max_pizza.se<<"\n";
				//cout<<"y a donde llegaremos sera -> "<<seize<<"\n";
				maximos.pop_back();
				for(int c = max_pizza.se; c<seize; c++)
				{
					while(mtop > 0 && secuencia[c].fi >= monotone[mtop-1].fi)
						mtop--;
					monotone[mtop++] = secuencia[c];
				}
			}
			else
			{
				//cout<<"la eliminacion aun no pasa a la pizza maxima\n";				
				int f = 0 , buscado = 0 ;
				buscado = seize-1;
				f = bins(0, mtop-1, buscado);
				//cout<<f<<" <- el encontrado\n";
		
				if( monotone[f].se == buscado)
				{
					//cout<<"el buscado es igual a la pizza base\n";
					mtop = f+1;
					continue;
				}
				else
				{
					//cout<<" el buscado esta entre el tope y la pizza base\n";
					mtop = f;
				 	for(int c = f; c<=buscado; c++)
				 	{
				 		while( mtop > 0 && secuencia[c] >= monotone[mtop-1])
				 			mtop--;
				 		monotone[mtop++] = secuencia[c];
				 	}	
				}

			}

		}
	}
	
}