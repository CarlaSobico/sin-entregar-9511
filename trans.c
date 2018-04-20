
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_COLUMNAS 5

int   tr(int M[][MAX_COLUMNAS] , size_t filas, size_t columnas);



int main(void)
{
	int M[2][2]={
				{1,2},
				{4,5}
				},j,i;

	tr(M , 2,2);
	for (i=0; i<2;i++){
		for (j=0; j<2 ;j++){
			printf(" %i ",M[i][j] );
		}
	puts("\n");
	}

	return 0;
}

int   tr(int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){

	/*int	M_transpuesta[columnas][filas];*/
	int G,i,j;
	G=0;
	
		for (i=0; i<2;i++){
		for (j=0; j<2 ;j++){
			printf(" %i ",M[i][j] );
		}
	puts("\n");
	}


	for (i = 0; i < columnas; i++){

		for (j=0; j <filas; j++){

			G = M[i][j];printf("%i", M[i][j] );
			printf("   %i\n", M[j][i] );
			M[i][j] = M[j][i];
			printf("  %i\n", M[i][j] );
			M[j][i] = G;printf("   %i\n", M[j][i] );

			/*M_transpuesta[j][i] = M[i][j];
			printf("%i\n", M_transpuesta[j][i] );*/
		}
	}
		for (i=0; i<2;i++){
		for (j=0; j<2 ;j++){
			printf(" %i ",M[i][j] );
		}
	puts("\n");
	}

	
	return 0;
}