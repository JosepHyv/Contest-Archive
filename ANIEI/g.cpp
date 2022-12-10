#include <iostream>
#include <algorithm>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int arreglo[4];
for(int i=0;i<4;i++){
    cin>>arreglo[i];
}
sort(arreglo,arreglo+4);
int suma[3];
suma[0]=arreglo[0]+arreglo[3];
suma[1]=arreglo[1]+arreglo[2];
suma[2]=suma[0]-suma[1];
if(suma[2]<0){
    suma[2]=suma[2]*-1;
}
cout<<suma[2]<<"\n";
}