#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6+2;
constexpr int inf = 2e9;

struct node
{
	int pos;
	ll cant;
};

vector < node > ssg;
bool ok = true;
int numeros = 0 ;

void llena( string s)
{
	ssg.clear();
	string aux = "";
	for( int c = 0 ; c<s.size();)
	{
		if( s[c] >= '0' && s[c] <= '9')
		{
			numeros ++;
			aux = "";
			for(; c<s.size(); c++)
				if( s[c]  > '9')
					break;
				else aux += s[c];
			if( aux.size() > 6)
			{
				ok = false;
				return;
			}
			ssg.pb({c, atol(aux.c_str())});

		}
		else
			ssg.pb({c,1});
		c++;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while( t--)
	{
		string a;
		int k;
		cin>>a>>k;
		ok = true;
		numeros = 0;
		llena(a);
		ll tamano = (int)a.size() - (2*numeros);
		//cout<<a<<" tiene tantos "<<numeros<<"\n";
		ll aux = 0 ;
		for( auto v: ssg)
			if( v.cant > 1)
				aux += v.cant;
			//cout<<a<<" "<<v.pos<<" "<<v.cant<<"\n";
		tamano += aux;
		if( tamano > k || !ok )
			cout<<"unfeasible\n";
		else
		{
			for( auto &v: ssg)
			{
				while( v.cant)
				{
					cout<<a[v.pos];
					v.cant--;
				}
			}
			cout<<"\n";
		}
	}
}
