#include<map>
#include<iostream>
using namespace std;

typedef long long int LL;

int n,x,y;
int st[4*(int (1e6))+2];
int raiz[int(1e6)+2];

int build(int nd, int i, int f)
{
	if( i == f)
		return st[nd] = raiz[f];
	int mm = ( i+f) / 2;
	int lf = nd*2;
	return st[nd] = build(lf, i, mm) + build(lf+1, mm+1, f);
}

void update( int nd, int i, int f, int id)
{
	if( i == f)
	{
		raiz[id]++;
		st[nd] = raiz[id];
	}	
	else
	{
		int mm = (i+f)/2;
		if( i <= id && id <= mm)
			update(nd*2, i,mm,id);
		else
			update((nd*2)+1, mm+1, f, id);

		 st[nd] = st[(nd*2)] + st[(nd*2)+1];
	}
}

int querry(int nd, int i, int f, int li, int ld)
{
	if( i > ld || f < li )
		return 0;
	if( li <= i && f <= ld)
			return st[nd];
	int mm = (i+f)/2;
	int lf = nd*2;
	return querry(lf, i, mm, li, ld) + querry(lf+1, mm+1, f, li, ld);
}

main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin>>n;
	build(1,1,(1e6));
	for(int c = 0; c<n; c++)
	{
		cin>>x>>y;
		if( x == 1)
			update(1,1,(1e6),y);
		else
			cout<<querry(1,1,(1e6),1,y)<<"\n";
	}
	/*cout<<"\n";
	for(int c = 0 ; c<=300; c++)
		cout<<c<<" "<<raiz[c]<<"\n";*/
}