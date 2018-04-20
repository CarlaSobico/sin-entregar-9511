

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500


typedef enum {positiva/*0*/,
			  nopositiva/*1*/,
			  negativa/*2*/,
			  nonegativa/*3*/,
			  cero/*4*/,
			  nocero/*5*/
			  }tipo_t ;


tipo_t matriz_positiva (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;
	int i,j;

	for (i = 0; i < columnas; ++i){
		for ( j = 0; j < filas; ++j){
			if (M[i][j] < 0){
				return a = nopositiva;
			}
			/*else
				return a = positiva;*/
		}
	}
	return a = positiva;
}

tipo_t matriz_negativa (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;
	int i,j;

	for ( i = 0; i < columnas; ++i){
		for ( j = 0; j < filas; ++j){
			if (M[i][j] > 0){
				return a = nonegativa;
			}
			/*else
				return a = negativa;*/
		}
	}
	return a = negativa;
}

tipo_t matriz_cero (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;
	int i,j;

	for (i = 0; i < columnas; ++i){
		for ( j = 0; j < filas; ++j){
			if (M[i][j] = 0){
				return a = cero;
			}
		}
	}
	return a = nocero;
}

tipo_t tipo_matriz (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t p,n,c,tipo;

	p = matriz_positiva(M, filas, columnas);
	n = matriz_negativa (M, filas, columnas);
	c = matriz_cero (M, filas, columnas);

	if (p == positiva && c == nocero){
		
		return tipo = positiva;
	}
	if (p == positiva && c == cero){
		
		return tipo = nopositiva;
	}
	if (n == negativa && c == nocero){
		
		return tipo = negativa;
	}
	if (n == negativa && c == cero){
		
		return tipo = nonegativa;
	}
} 

int main(void)
{

	int i,j;
	int M[3][3]={ {1,2,3},
					{4,5,6},
					{7,8,9}
				};
	tipo_t a;
	a = tipo_matriz(M,3,3);
	printf("%s\n", a);
	/*for ( i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%i", M[i][j] );
		}
	}*/


	return 0;
}