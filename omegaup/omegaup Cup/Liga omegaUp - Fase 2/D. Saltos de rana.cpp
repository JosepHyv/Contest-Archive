#include<iostream>
using namespace std;
string vx;
int n,m;
int cc=0,it=0,ps=0;
main ()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n>>m;
    cin>>vx;
   // vx+=".....";
    while(true)
    {
        it=(cc+m);
        if(it>n-1 || (it==n-1 && vx[it]=='1'))
        {
            cout<<ps+1;
            return 0;
        }
       bool ban=false;
        for(int d=it; d>cc; d--)
        {
            if(vx[d]=='1')
            {
                cc=d;
                ps++;
                ban=true;
                break;
            }
        }
        if(!ban)
        {
            cout<<-1;
            return 0;
        }
    }
}