#include <iostream>
#include <vector>
using namespace std;
vector<int>primo;
int mcm(int);
void prim(int, int);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie();
    int n;
    int q,k;
    cin>>n;
    for(int x=1;x<=n;x++)
    {
        cin>>q>>k;
        int sum=q-1;
        prim(k,q);
        for(int xi=2;xi<=q;xi++)
        {
            for(int cci=0;cci<primo.size();cci++)
            {
                if(xi%primo[cci]==0)
                {
                    sum--;
                    break;
                }
            }
        }
        cout<<sum<<endl;
        primo.clear();
    }
}
int mcm(int wi)
{
    int cont=0;
    for(int c=1;c<=wi;c++)
    {
        if(wi%c==0)
        {
            cont++;
        }
        if(cont>2)
        {
            return -1;
        }
    }
    return cont;
}
void prim(int x,int y)
{
    for(int wi=x+1;wi<=y;wi++)
    {
        if(mcm(wi)==2)
        {
            primo.push_back(wi);
        }
    }
}
