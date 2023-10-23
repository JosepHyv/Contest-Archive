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
 
struct node 
{
	int x,y, pasos, lobos;
};

bool v[101][101];
char m[101][101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int l, n;
	cin>>l>>n;
	queue < node > cl;
	for(int c = 0; c< n; c++)
	{
		for(int d = 0; d< n; d++)
		{
			cin>>m[c][d];
			if(m[c][d] == 'S') 
			{
				v[c][d] = true;
				cl.push({c,d,0,0});
			}
		}
	}

	int vx[] = {-1, 0,1,0};
	int vy[] = {0,1,0,-1};
	while(sz(cl))
	{
		node root = cl.front();
		cl.pop();
		if( m[root.x][root.y] == 'E')
		{
			cout<<root.pasos<<'\n';//<<root.lobos<<'\n';
			return 0;	
		}

		for(int c = 0; c<4; c++)
		{
			node hijo = root;
			hijo.x += vx[c];
			hijo.y += vy[c];
			hijo.pasos++;
			if(hijo.x >= 0 && hijo.x < n && hijo.y >= 0 && hijo.y < n && m[hijo.x][hijo.y] != '#' && !v[hijo.x][hijo.y])
			{
				hijo.lobos += (m[hijo.x][hijo.y] == '*');
				if(hijo.lobos > l)
					continue;

				v[hijo.x][hijo.y] = true;
				cl.push(hijo);
			
			}
		}

	}


	cout<<-1;



	cout<<"\n";
}