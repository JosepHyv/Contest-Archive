#include<bits/stdc++.h>
using namespace std;


constexpr int dx8[] = {-1,-1,-1,0,1,1,1,0};
constexpr int dy8[] = {-1,0,1,1,1,0,-1,-1};

int n,m;
char mm[50][50];
int especial[50][50];
bool ok = true;

bool check( int x, int y )
{
	if( x < 1 || y < 1 || x > n || y > m  )
		return false;
	return true;
}

set < string > vs;
int maximo = 0;

void pinta( string s)
{
	int cont = 0 ;
	for(int c = 1; c<=n; c++)
	{
		for(int d = 1; d<=m; d++)
		{
			for(int h = 0; h<8; h++)
			{
				
				int it = 0 ;
				int ax = c, ay = d;
				string temp = "";
				while( check(ax  , ay) && it < (int)s.size())
				{
					temp += mm[ax][ay];
					ax += dx8[h];
					ay += dy8[h];
					it++;
				}

				bool aux = true;
				if( temp.size() == s.size())
				{
					//cout<<"Posibles invalidas -> "<<s<<" - "<<temp<<"\n";
					string olo = s;
					string hh = temp;
					sort(olo.begin(), olo.end());
					sort(hh.begin(), hh.end());
					if( olo != hh)
						aux = false;
					else
					{
						if(vs.find(temp) != vs.end())
							aux = false;
						else
						{
							if( s != temp)
								vs.insert(string(temp.rbegin(), temp.rend()));
							vs.insert(temp);
						}
					}

				}
				else aux = false;

				if( aux )
				{
					cout<<s<<" "<<temp<<"\n";
					cont++;
					//cout<<cont<<" "<<maximo<<"\n";
					it = 0;
					ax = c;
					ay = d;
					while( check(ax  , ay) && it < (int)s.size())
					{
						it++;
						especial[ax][ay]++;
						maximo = max( maximo, especial[ax][ay]);
						ax += dx8[h];
						ay += dy8[h];
					}	
				}


			}
		}

	}
	if( cont == 0  )
		ok = false;

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>m;
	for(int c = 1; c<=n; c++)
		for(int d = 1; d<=m; d++)
			cin>>mm[c][d];
	int k;
	cin>>k;
	while( k--)
	{
		string s;
		cin>>s;
		pinta(s);
	}

		int ans = 0;
		for(int c = 1; c<=n; c++)
		{
			for(int d = 1; d<=m; d++)
			{
				cout<<especial[c][d]<<" ";
				if( especial[c][d] == maximo)
					ans++;
			}
			cout<<"\n";
		}
		cout<<ans+1<<"\n";
	


}

