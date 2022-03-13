#include <iostream>
using namespace std;
int main(void){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int o,m;
        cin>>o>>m;
        cout<<"Team #"<<i+1<<"\n";
        cout<<"Games: "<<o<<"\n";
        cout<<"Points: "<<m<<"\n";
        cout<<"Possible records:"<<"\n";
        int ux=o;
    
        while(ux>=0){
            int z=o-ux,ayuda=0;
            int zz=0;
          
            while(z>=0){
                if(((ux*3)+z)==m){
                    cout<<ux<<"-"<<z<<"-"<<zz<<"\n";
                }
                z--;
                zz++;
            }
            ux--;
        }
   
        cout<<"\n";
        
    }
    return 0;
}