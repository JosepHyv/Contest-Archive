#include<iostream>
using namespace std;

int n;

main ()
{
    cin>>n;
    if( n < 540 || n > 1520 )
    {
        cout<<"error";
        return 0;
    }
    if( n < 580)
    {
        cout<<"adelante "<< 580 - n;
        return 0;
    }
    if( n >= 580 && n <=780)
    {
        cout<<"atras "<<n-580;
        return 0;
    }
    if( n > 780 && n<=980)
    {
        cout<<"adelante "<<980-n;
        return 0;
    }
    if(n >= 980 &&  n <= 1085)
    {
        cout<<"atras "<<n-980;
        return 0;
    }
    if( n > 1085 && n<=1190)
    {
        cout<<"adelante "<<1190-n;
        return 0;
    }
    if( n >= 1190 && n<= 1220)
    {
        cout<<"atras "<<n-1190;
        return 0;
    }
    if( n > 1120 && n<=1250)
    {
        cout<<"adelante "<<1250-n;
        return 0;
    }
    if( n>= 1250 && n <= 1335 )
    {
        cout<<"atras "<<n-1250;
        return 0;
    }
    if( n > 1335 && n<=1420)
    {
        cout<<"adelante "<<1420-n;
        return 0;
    }
}
