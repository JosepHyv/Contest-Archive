#include<vector>
#include<stdio.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
using namespace std;

typedef  unsigned long long int ll;
constexpr int MAXN = 1e6+2;
constexpr int inf = 2e9;

// void solve() {}
struct nodo
{
	ll pos; 
	int appe, i = -1,d = -1;
};

struct abb
{
	vector < nodo > arbol;
	void insert(ll a)
	{
		int aux = 0;
		if( !sz(arbol) )
			arbol.pb({a, 1, -1, -1});

		else
		{	
			while(true)
			{	
			//cout<<tam<<" "<<a<<"\n";	
				if( a == arbol[aux].pos)
				{
					arbol[aux].appe++;
					break;
				}
				if( a > arbol[aux].pos)
				{
					if( arbol[aux].d != -1)
						aux = arbol[aux].d;
					else 
					{
						arbol[aux].d = sz(arbol);
						arbol.pb({a, 1,-1,-1});
						break;
					}
				}
				else
				{
					if( a == arbol[aux].pos)
					{
						arbol[aux].appe++;
						break;
					}
					if( arbol[aux].i != -1)
						aux = arbol[aux].i;
					else
					{
						arbol[aux].i = sz(arbol);
						arbol.pb({a,1,-1,-1});
						break;
					}
				}
			}
		}
	}

	int existe( ll a )
	{
		if(!sz(arbol))
			return -1;
		int aux = 0;
		while( aux != -1 )
		{
			//cout<<aux<<" "<<a<<"\n";

			if( a == arbol[aux].pos)
				return aux;

			if( a < arbol[aux].pos)
				aux = arbol[aux].i;
			else 
				aux = arbol[aux].d;

		}
		return -1;

	}
};

int main()
{
	
	int n;
	scanf("%d",&n);
	abb coso;
	while(n--)
	{
		char a ;
		ll p;
		scanf(" %c",&a);
		scanf("%llu",&p);
		
		if( a =='A')
		{
			coso.insert(p);
			//cout<<coso.arbol[1].appe<<"\n";
		}
		else
		{
			int pos = coso.existe(p);
			if( pos != -1)
				printf("%d",coso.arbol[pos].appe);
				//cout<<coso.arbol[pos].appe;
			else
				printf("0");
			printf("\n");
		}
	}
	/*cout<<sz(coso.arbol)<<"\n";
	for(int c  = 0; c<sz(coso.arbol); c++)
	{
		auto h = coso.arbol[c];
		cout<<c<<" "<<h.pos<<" "<<h.appe<<" "<<" "<<h.i<<" "<<h.d<<"\n";
	}*/
}