#include <iostream>
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

long long int arr[10]={6,2,5,5,4,5,6,4,7,6};
ll n,x;

bool funciona( ll num)
{
    ll aux = 0;
    while( num )
    {
        aux += arr[num% 10];
        num /= 10;
    }

    //cout<<aux<<"\n";
    if( aux > x)
        return true;
    return false;
}

ll bins( int i, int f)
{
    if( i == f )
        return f;
    ll mm = ( i+f) / 2;

    if( funciona(mm))
        return bins(i, mm);
    return bins(mm+1, f);
}

const int inf = 1e9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    while( n--)
    {
        cin>>x;
        ll mini = inf;
        ll ans = bins(1, 1000);
        mini = min( ans, mini);
        while( true)
        {
            ans = bins( 1, ans);
            if( ans >= mini )
                break;
            mini = min( mini, ans);
        }

        cout<<mini<<"\n";
    }
}