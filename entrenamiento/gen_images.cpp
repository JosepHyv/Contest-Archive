#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define clr(x) memset( x, 0, sizeof(x))
using namespace std;

typedef long long int ll;
constexpr int maxn = 1e6;

void gen()
{
	int MAXVal = rand() % 255;
	int n,m;
	n = rand() % 1080+1;
	m = rand() % 720+1;

	fstream imagen;
	imagen.open("test.ppm", ios::out);
	imagen << "P6\n";
	imagen << n<<" "<<m<<"\n";
	imagen << MAXVal<<"\n";
	for(int c = 0 ; c<n; c++)
	{
		for(int d = 0 ; d<m; d++)
		{
			imagen << rand() % MAXVal<<" "<<rand() % MAXVal<<" "<<rand() % MAXVal<<"  ";
			//imagen<<"\n";
		}
		imagen<<"\n";
	}

	imagen.close();

}

int main () 
{

	srand( time( NULL ));
	int c = 40;
	/*for(; ~c; c--)
	{
		string pp = "caso";
		pp += to_string(c);
		pp += ".in";
		input(pp,(int)1e5);
		output(pp);

	}*/

	gen();
}
