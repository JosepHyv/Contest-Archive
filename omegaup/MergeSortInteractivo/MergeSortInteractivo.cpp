#include "MergeSortInteractivo.h"

// Main
//	void combinar(int izquierda, int mitad, int derecha)

void mezclar(int i, int f ) 
{
	// FIXME
	if( i == f )
		return;
	
	int mitad = ( i + f ) / 2;
	mezclar(i, mitad);
	mezclar(mitad+1, f);
	combinar(i,mitad,f);
}