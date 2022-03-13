#include<iostream>

typedef long long int lli;

constexpr int MAXN=1000002;

using namespace std;

lli a,b,multi_izq,multi_der,i,respuesta,ans;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>a>>b;

    multi_der=b%9;
    multi_izq=a%9;

    if(a==9){
        multi_izq=9;
    }
    if(b==9){
        multi_der=9;
    }

    if(multi_izq<=multi_der){
        i=multi_der-multi_izq+1;
        respuesta=i*(multi_izq+multi_der)/2;
        ans=respuesta;
    }

    else{
        i=(9-multi_izq)+1;
        respuesta+=i*(multi_izq+9)/2;
        ans=respuesta;
        i=(multi_der-1)+1;
        respuesta=i*(1+multi_der)/2;
        ans+=respuesta;
    }

    if(ans%9==0){
        cout<<9;
    }
    else{
        cout<<ans%9;
    }

return 0;

}