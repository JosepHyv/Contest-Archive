#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    srand(time(NULL));
    int n,a,b;
    double contador = 0,contador2 = 0;
    cin>>n>>a>>b;
    double ans = 0;
    if (a==b) {
        cout<<setprecision(5)<<fixed<<(double)n/a<<"\n";
        } else {
    for (double i = 1 ; i < 100000; i++) {
        double azar = rand() % (b-a + 1) + a;
        ans+=azar;
        contador++;
        if (ans >= n) {
            ans = 0;
            contador2++;
        }
    }
    cout<<setprecision(5)<<fixed<<contador/contador2<<"\n";
}

}