

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int busqueda_binaria(const int v[],/* vector donde buscar */  size_t n,  /* largo del vector (dispensable) */    int objetivo,  /* elemento a buscar */  size_t izq,    /* franja del vector donde buscar, */  size_t der){
	/*vector ingresado ya ordenado*/

	int mitad;
	mitad= (n-1)/2;
	while (v[mitad] !=objetivo){
		if (v[mitad]>objetivo ){
			der=mitad-1;
			mitad= (der+izq)/2;
		}
		else{
			izq=mitad+1;
			mitad= (der+izq)/2;
		}
	}
	if (v[mitad]==objetivo )
	{
		return mitad;
	}
	return 0;
	
}
/***********para probar**************/
int main (void){
	int v[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	int j;
	j=busqueda_binaria(v,13,8,0,12);
	printf("%i\n", j);
	return 0;
}
