#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;

pair < int , int > vx[200001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    for(int c = 0 ; c<n; c++)
        cin>>vx[c].first>>vx[c].second;
    sort(vx, vx+n);
 
 
    int ans = 0;
    priority_queue < pair < int , int > > sec;
    sec.push({-vx[0].second, vx[0].first});
    for(int c = 1; c<n; c++)
    {
        
        while( sec.size() && vx[c].first >= -sec.top().first)
            sec.pop();
        sec.push( {-vx[c].second, vx[c].first} );

        ans = max( ans, int(sec.size()));
    }
    cout<<ans;
    
    
 
    cout<<"\n";
    //

}