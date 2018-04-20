/*Escribir una función que convierta un número que representa una cantidad de segundos, 
a su equivalente en horas, minutos y segundos, retornando las partes por la interfaz,
 status_t por el nombre, indicando el resultado de la operación. 
 Realizar las validaciones pertinentes.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define CANT 5
#define MSJ_ERROR "ERROR"

typedef enum{
	ST_OK,
	ST_NO_OK
	}status_t;

/*status_t convertir (int v[], int CANT, int segundos){
	int seg, min, hor;
	if (CANT<3 || segundos<0 ){
		fprintf(stderr, "%s\n", MSJ_ERROR);
	}
	min=segundos/60;
	hor=min/60;
	min=min%60;
	seg=segundos&60;
	v[0]=hor;
	v[1]=min;
	v[2]=hor;
	return v;
}
*/
/****************** ooooooooooooooooooooooooo ****************/

status_t convertir (int segundos){
	int seg=0, min=0, hor=0;
	if ( segundos<0 ){
		fprintf(stderr, "%s\n", MSJ_ERROR);
		return ST_NO_OK;
	}
	min=segundos/60;
	hor=min/60;
	min=min%60;
	seg=segundos%60;
	printf("%i:%i:%i\n",hor,min,seg );
	return ST_OK;
}

int main(void){
	srand (time (NULL));
	convertir(rand() );
	return 0;
}