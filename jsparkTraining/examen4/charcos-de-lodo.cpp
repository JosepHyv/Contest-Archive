#include<iostream>
#include<queue>
using namespace std;

struct nodo
{
    int x,y,p;
};

    queue <nodo> bfs;
    nodo padre;
    bool pasos[1002][1002];
    int p,q,a,b,n;
    char mat[1002][1002]{};

    int vx[] = {-1,0,1,0};
    int vy[] = {0,1,0,-1};
    
int main()
{
    cin>>p>>q>>n;
    for(int c=0;c<n;c++)
    {
        cin>>a>>b;
        mat[a+500][b+500]=1;
    }
    padre.x=500;
    padre.y=500;
    padre.p=0;
    bfs.push(padre);
    while(!bfs.empty())
    {
        padre=bfs.front();
        bfs.pop();
        if(padre.x==p+500&&padre.y==q+500)
        {
            cout<<padre.p;
            break;
        }

        for(int c = 0; c<4; c++)
        {
        	nodo hijo = padre;
        	hijo.x += vx[c];
        	hijo.y += vy[c];
        	hijo.p ++;
        //	cout<<"mi padre es -> ("<< padre.x<<' '<<padre.y<<") mi hijo es -> ("<< hijo.x<<' '<<hijo.y<<")\n";
        	// preguntar si el hijo que genere es valido 
        	if(hijo.x >= 0 && hijo.y >= 0 && hijo.x <= 1000 && hijo.y <= 1000  && !mat[hijo.x][hijo.y])
        	{
     			bfs.push(hijo);
     			mat[hijo.x][hijo.y] = true;  		
        	}   
       }
   }
}
// aprovechen el tiempo para escribir preguntas (si las tienen) sobre este codigo

/// ya casi se acaba la cancion, puesieron la version extendida xd 
