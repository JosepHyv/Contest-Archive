#include<vector>
#include<iostream>
using namespace std;

void elimina(vector < int > data)
{
	data.erase(data.begin());
	for(int a: data)
		cout<<a<<" ";
} 

int main()
{
	vector < int > vx = {1,2,3,4,5};
	elimina(vx);
	for(int a : vx)
		cout<<a<<" ";
}
