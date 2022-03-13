#include<iostream>
using namespace std;

int posicion(int a[], int n, int x)
{

	if(n <= 0 ) return -1;
	if(a[n-1] == x) return n-1;
	return posicion(a,n-1,x); 
}

/// cero si no 1 si si :D
int estaOrdenado(int a[], int n)
{
	if( n <= 0 ) return 0;
	if( n == 1 ) return 1;
	if( a[n-1] < a[n-2]) return 0;
	return estaOrdenado(a,n-1);
}


// para no usar stl cree mi propia funcion :D
int maxi(int a, int b )
{
	return (a > b? a : b);
}

int getMayor(int a[], int n)
{
	if(n <= 0) return -(1 << 30);// return -(1 << 30); /// en el cso en el que se mande una n negativa :D
	if( n == 1) return a[0];
	return maxi(a[n-1], getMayor(a, n-1));
	/* sol alternativa
	int aux = getMayor(a,n-1);
	return (a[n-1] > aux ? a[n-1]: aux); */
}
/*
/// esta funcion es solo para no usar MAX de la  STL
//// abajo hay una solucion alternativa sin usar otra funcion
int maxi(int a, int b )
{
    return (a > b? a : b);
}
int getMayor(int a[], int n)
{
    if( n == 1) return a[0];
    return maxi(a[n-1], getMayor(a, n-1));
    /* 
     
      sol alternativa
    
  int aux = getMayor(a,n-1);
    return (a[n-1] > aux ? a[n-1]: aux); 
  
}
*/
void cambio(int &a, int &b)
{
	int aux = a;
	a = b;
	b = aux;
}
void invertir(int a[], int i, int j)
{
	if(i >= j ) return;
	cambio(a[i], a[j]);
	invertir(a, i+1, j-1);
}

int main()
{
	int increasing[] = {3, 6, 7, 9, 12, 15, 17};
	int decreasing[] = {17, 15, 12, 7, 9, 6, 3};
	int shuffled[] = {3, 15, 12, 6, 17, 7, 9};

	cout<<posicion(shuffled, 7, 3)<<"\n";
	cout<<getMayor(shuffled,5)<<"\n";
	cout<<estaOrdenado(increasing,7)<<"\n";
	invertir(shuffled, 0, 6);
	for(int a: shuffled)
		cout<<a<<" ";

}