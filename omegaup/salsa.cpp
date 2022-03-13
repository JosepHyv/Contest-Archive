#include <stdio.h>
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int  bucket[1000002];
bool comp(int x,int y)
{
    return x>y;
}
int n,m,k;
int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin>>n>>k;
    for(int c=0; c<n; c++)
    {
       cin>>bucket[c];
    }
    sort(bucket,bucket+n,comp);
    /*for(int c=0; c<=n; c++)
    {
        cout<<bucket[c]<<" ";
    }
    cout<<"\n";*/
  int  rep=0, number=0;
  for (int i=0, j=0; i<n && j < n; i++)
    {
        while (j<n && k-bucket[i]+bucket[j]>=0)
        {
            k-=(bucket[i] - bucket[j++]);
        }
        if (j-i>=rep)
        {
            //cout<<"-- "<<rep<<" "<<j<<" "<<i<<" "<<number<<" "<<bucket[i]<<"\n";
            rep = j - i,number=bucket[i];
            //cout<<"-n- "<<rep<<" "<<j<<" "<<i<<" "<<number<<" "<<bucket[i]<<"\n";
        }
        //cout<<k<<" "<<bucket[i]<<" "<<bucket[i+1]<<" "<<(bucket[i]-bucket[i+1])<<" "<<j<<" "<<i<<"\n";
    k += (bucket[i]-bucket[i + 1]) * (j - i - 1);
  }
  cout<<rep<<" "<<number;
  cout<<"\n";
}