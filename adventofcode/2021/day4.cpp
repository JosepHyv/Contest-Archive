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

int mm[102][6][6];
bool vs[102][6][6];

bool check(int it)
{
	bool ok1 = true, ok2 = true;
	for(int c = 0 ; c<5; c++)
	{
		ok1 = true;
		for(int d = 0 ; d<5; d++)
			ok1 &= vs[it][c][d];
		if(ok1) break;
	}

	for(int c = 0 ; c<5; c++)
	{
		ok2 = true;
		for(int d = 0 ; d<5; d++)
			ok2 &= vs[it][d][c];
		if(ok2) break;
	}

	return ok1 | ok2;

}

void marca(int it, int x)
{
	for(int c = 0 ; c<5; c++)
	{
		for(int d = 0 ; d<5; d++)
			if(mm[it][c][d] == x )
				vs[it][c][d] = true;
	}
}

void prints(int it)
{
	for(int c = 0 ; c<5; c++)
	{
		for(int d = 0 ; d<5; d++)
			cout<<mm[it][c][d]<<" ";
		cout<<"\n";
	}
	cout<<"\n";
	for(int c = 0 ; c<5; c++)
	{
		for(int d = 0 ; d<5; d++)
			cout<<vs[it][c][d]<<" ";
		cout<<"\n";
	}


}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout<<setprecision(15)<<fixed;
	freopen("in4", "r", stdin);
	//freopen("output.txt", "w", stdout);*/

	string numbers;
	cin>>numbers;
	vector< int > dnumber;
	for(int c = 0 ; c<sz(numbers); c++)
	{
		string sub = "";
		while(c < sz(numbers) && numbers[c] >= '0' && numbers[c] <= '9')
			sub += numbers[c++];
		dnumber.pb(atoi(sub.c_str()));
	}

	int it = 0 ;
	while(true)
	{
		int x;
		if(!(cin>>x))
			break;
		mm[it][0][0] = x;
		int aux = 1;
		for(int c = 0; c<5; c++)
		{
			for(int d = aux; d<5; d++ )
				cin>>mm[it][c][d];
			aux = 0 ;
		}
		it++;
	}

	dbg(dnumber);
	
	

	ll ans = 0 ;
	ll last = 0;
	vector < bool > invalid(it);
	for(int a: dnumber)
	{
		bool ok = false;
		for(int c = 0; c<it; c++)
		{
			marca(c,a);
			if(check(c) && !invalid[c] )
			{
				invalid[c] = true;
				ans = 0;
				prints(c);
				for(int i = 0 ; i<5; i++)
					for(int j =0 ; j< 5; j++)
						ans += (!vs[c][i][j] ? mm[c][i][j] : 0);
				last = a;
			}
		}
	}

	cout<<ans * last;
	
	

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

