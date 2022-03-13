// map::find
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

struct pares
{
  int a,b;
  bool operator < ( const pares & cosa) const
  {
    if( a != cosa.a)
        return a < cosa.a;
      else return b < cosa.b;
  }
};

int main ()
{
  pares a,b;
  a = {1,2};
  b = {2,3};
  string ans[] = {"false", "true"};
  cout<< ans[(a < b)];
  
  return 0;
}