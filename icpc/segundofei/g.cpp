#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define mcd(x,y) __gcd(x,y)
#define all(x) x.begin(), x.end()
#define mcm(x,y) ( (x*y) / mcd(x,y))
#define clr(x) memset(x, 0,  sizeof(x))
#define press(x)  setprecision(x)<<fixed
using namespace std;

typedef long double ld; 
typedef long long int ll;
typedef vector < int > vi;
typedef pair < int , int > pii;
constexpr int inf = 2e9;
constexpr int mod = 1e9+7;
constexpr int MAXN = 1e6+2;

stack < int > mm[302][302];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	/*ifstream fin (".in");
	ofstream fout (".out");*/
	int n,m,g,cc,k;
	cin>>m>>n;
    cin>>g>>cc;
    cin>>k;
    for(int z = 0; z<g; z++)
    for(int c=1; c<=n; c++)
        for(int d=1; d<=m; d++)
            mm[c][d].push(cc);

    for(int h = 0; h<k; h++)
    {
        int ci, ni, mi, xi, yi;
        cin>>ci>>mi>>ni>>xi>>yi;
        for(int c = yi, hx = 0; c<=n && hx<ni; c++,hx++)
            for(int d = xi , j = 0; d<=m && j<mi; d++,j++)
                if(ci==-1)
                {
                    if(!mm[c][d].empty())
                        mm[c][d].pop();
                }
                else
                    mm[c][d].push(ci);
    }

    for(int c=1; c<=n; c++)
    {
        for(int d=1; d<=m; d++)
        {
            if(mm[c][d].empty())
               cout<<"-1 ";
            else
                cout<<mm[c][d].top()<<" ";
        }
        cout<<"\n";
    }

}

