//PROBLEM LINK:
//PROBLEM PATH:
#include<bits/stdc++.h>
#define tp top
#define pp pop
#define ph push
#define bk back
#define ft front
#define fi first 
#define se second
#define pb push_back
#define sz(x) (int) x.size()
#define space(x) getline(cin,x)
#define all(x) x.begin(), x.end()
#define mcm( a, b) a*b/__gcd(a,b)
#define adj(x) vector<  vector < x > >  
#define clr(x) memset( x, 0, sizeof(x))
#define press(x) setprecision(x)<<fixed
#define deb(x) cerr<< #x<< "is "<< x<<"\n"
using namespace std;

typedef long double ld;
typedef set < int > si;
typedef vector< int > vi;
typedef long long int ll;
typedef set < string > ss;
typedef pair < ll, ll > pll;
typedef map < ll , ll > mll;
typedef map < int, int > mii;
typedef map < int, string> mis;
typedef pair < int , int > pii;
typedef pair < char , int > pci;
typedef map < string, int > msi;
typedef set < long long int > sl;
typedef pair < string , int > psi;
typedef unsigned long long int ull;
typedef vector < pair <int, int >  > vpii;
typedef vector < pair < string, int > > vpsi;

void DBG()
{
	cerr<<"]\n";
	return;
}

template<class H, class... T > 
void DBG( H h, T... t)
{
	cerr << h;
	if( sizeof...(t))
		cerr<<", ";
	DBG(t...);
}
#define dbg(...) cerr <<" values[ "<< #__VA_ARGS__ << " ] ---> [ ", DBG(__VA_ARGS__)

template < typename... T> 
void read(T&... args)
{
	((cin >> args), ...);
}

template < typename... T > 
void print(T... args)
{
	((cout << args <<" "), ...);
}

constexpr ll mod = 1e9+7;
constexpr ll MAXN = 1e6+3;
constexpr int inf = 2e9;
constexpr short dx4[] = {-1,0,1,0};
constexpr short dy4[] = {0,1,0,-1};
constexpr short dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr short dy8[] = {-1,0,1,1,1,0,-1,-1};

int vx[MAXN];
int ans[4*MAXN];
int it, itn;
ll n;

bool valido( int a)
{
	if( a > 7)
		return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	pii cnt;
	bool oks = true;
	while(n)
	{
		vx[it++]  = n%10;
		ans[itn++] = n%10;
		if( n %10 == 4)
			cnt.fi ++;
		else if( n % 10 == 7)
			cnt.se++;
		else
			oks = false;
		n/=10;
	}

	if( cnt.fi == cnt.se && cnt.fi && cnt.se && oks)
	{
		for(int c = it-1; c>=0; c--)
			cout<<ans[c];
		return 0;
	}

	if( itn % 2 )
	{
		for(int c =  itn; c>=0; c--)
			ans[c] = 4;
		for(int c = 0 ; c<=itn/2; c++)
			ans[c] = 7;

		for(int c = itn; c>=0; c--)
			cout<<ans[c];
		return 0;
	}
	else
	{
		cnt.fi = cnt.se =  0 ;
		bool ok = false;
		int aux = 0;
		for(int c = itn-1; c>=0; c--)
		{
			//dbg(c, ans[c], cnt.fi, cnt.se);
			if( valido(vx[c]) )
			{
				if( ans[c] < 4)
				{
					ok = true;
					ans[c] = 4;
					cnt.fi ++;
					aux = c-1;
					break;
				}
				else if( ans[c] > 4 && ans[c] < 7 )
				{
					ok = true;
					ans[c] = 7;
					cnt.se ++;
					aux = c-1;
					break;
				}
				else if( ans[c] == 4)
					cnt.fi++;
				else
					cnt.se++;


			}
			else if( ans[c+1] != 7 && c+1 < itn)
			{
				if( ans[c+1] == 4)
					cnt.fi--;
				ans[c+1] = 7;
				aux = c;
				ok = true;
				//cnt.fi--;
				cnt.se++;
				break;
			}
			else
			{
				itn += 2;
				for(int c = itn-1; c>=0; c--)
					ans[c] = 4;
				for(int c = 0; c<=(itn-1) / 2; c++)
					ans[c] = 7;

				for(int c = itn-1; c>=0; c--)
					cout<<ans[c];
				return 0;
			}
		}

		if( ok)
		{
			for(int c = aux; c>=0; c-- )
				ans[c] = 4;
			cnt.fi += aux+1;
			//dbg(cnt.fi, cnt.se, ans[3], ans[2], ans[1], ans[0]);
			for(int c = 0; c<itn && cnt.fi != cnt.se; c++)
				{
					cnt.fi--;
					cnt.se++;
					ans[c] = 7;
				}

		}
		for(int c = itn-1; c>=0; c--)
			cout<<ans[c];
	}


}
