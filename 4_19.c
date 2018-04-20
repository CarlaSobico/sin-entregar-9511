/*
(programas con matrices) Para cada inciso escriba un programa que lo resuelva, o escriba un programa que resuelva todos:

    cargue una matriz A∈ℝN×N

y calcule su traza (suma de los elementos de la diagonal principal),

cargue una matriz A∈ℝN×M

y número y modifique la matriz sumando a cada componente el número recibido,

cargue una matriz ∈ℝN×M

y número y modifique la matriz mulplicando a cada componente por el número recibido,

cargue una matriz A∈ℝN×M
y modifique dicha matriz cambiándola por su transpuesta o lea otra matriz B con las dimensiones adecuadas y la cargue con la transpuesta de A

,

cargue una matriz A∈ℝN×M

e indique si la misma es positiva, no-negativa, negativa o no-positiva [1]. Una matriz es positiva (no-negativa) si cumple que todos sus elementos son mayores (mayores o iguales) que cero. 
Una matriz es negativa (no-positiva) si cumple que todos sus elementos son menores (menores o iguales) que cero. Por ejemplo:

        A1=[1324]

es positiva (aij>0 ∀i,j
),
A2=[1304]
es no negativa (aij≥0 ∀i,j
),
A3=[−1−3−2−4]
es negativa (aij<0 ∀i,j
),
A4=[−1−30−4]
es no positiva (aij≤0 ∀i,j
),
A5=[100−4]

        no cumple ninguna de las condiciones.

sólo para matrices de 2×2
ó 3×3

: calcule el determinante,

dadas 2 matrices A∈ℝN×K
y B∈ℝK×M, calcule el producto almacenando el resultado en una tercera matriz C

    ,

    retorne el máximo elemento de la matriz,

    retorne el máximo de la suma, en valores absolutos, de los elementos de cada columna (norma-1 matricial),

    retorne el máximo de la suma, en valores absolutos, de los elementos de cada columna (norma-infinito matricial).

    Tómese un descanso.

(funciones con matrices) Repita el ejercicio anterior, pero utilizando funciones. Agregue el siguiente inciso:

    Tómese dos descansos.

*/

/*
a 	sumar los M[i][i] CHECK
b 	NUmero=n n+M[i][j] check
c 	NUmero=n n*M[i][j] CHECK
d 	Cambiar M[i][j] por M[j][i] CHECK
e 	ver si son todos positivos es positiva NO SE
	si todos positivos y algun 0 es no negativa
	si todos negativos es negativa
	si todos negativos y algun 0 es no positiva
	si no no pertenece a la clasificacion
f 	if n=2 m=2 || n=3 m=3 
	https://es.wikihow.com/encontrar-el-determinante-de-una-matriz-3x3  CJHEK
g	C[g][h]+= M[i++][j]*N[i][j++]	CHECK
h 	while i=1 j=1 max = M[1][1]
	if M[i][j]mayor que max  M[i][j]=max
i 	retorne el máximo de la suma, en valores absolutos, de los elementos de cada columna (norma-1 matricial),
	CUAL SUMA, LA DE CADA COLUMMNO Y DECIR CUAL ES LA COLUMNA QUE SUMA MAS?
j	retorne el máximo de la suma, en valores absolutos, de los elementos de cada columna (norma-infinito matricial).
	??????????????????????
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500

/********************* TRAZA ***********************/

int traza (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas ){
	
	if (columnas!=filas){

		fprintf(stderr, "%s\n", MSJ_ERROR );
		return EXIT_FAILURE;
	}

	int traza=0;
	for (int i = 0; i < ccant; ++i){

		traza+=M[i][i];

	}

	return traza;
}


/*******************SUMAR UN NUMERO****************************/
int suma (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas, int n ){

	int i, j;
	for (i=0; i<filas ; i++){
		for ( j = 0; j < columnas; ++j)
		{
			M[i][j]+=n;
		}
	}
	return 0;
}

/*****************MULTIPLICAR UN NUMERO*******************/
int multiplicar (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas, int n ){

	int i, j;
	for (i=0; i<filas ; i++){
		for ( j = 0; j < columnas; ++j)
		{
			M[i][j] = M[i][j] * n;
		}
	}
	return 0;
}





/****************MATRIZ TRANSPUESTA EN EL OTRO ARCHIVO************/
int transpuesta(int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){

	/*int	M_transpuesta[columnas][filas];*/
	int G,i,j;

	for ( i = 0; i < columnas; ++i){

		for (j = 0; j <filas; ++j){

			G = M[j][i];
			M[j][i] = M[i][j];
			M[i][j] = G;

			/*M_transpuesta[j][i] = M[i][j];*/
		}
	}
	return 0;
}

/**********************TIPO DE MATRIZ*SIN FUNCIONES***************************************/


/*int tipo_matriz (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	bool positiva  = false;
	bool negativa = false;
	bool ceros = false;
 

	for (int i = 0; i < fcant; ++i){

		for (int i = 0; i < ccant; ++i){

			if(M[i][j] > 0){

				if(negativa){
					printf("%s %s\n", MSJ_MATRIZ, MSJ_MATRIZ_NADA );
					return EXIT_SUCCESS;
				}
				positiva = true;


			}
			else if(M[i][j] == 0){
				ceros = true

			}
			else if(M[i][j] < 0){

				if(M[i][j] > 0){
					if(positiva){
					printf("%s %s\n", MSJ_MATRIZ, MSJ_MATRIZ_NADA );
					return EXIT_SUCCESS;
					}
					negativa = true;
				}
			}
		}
	if (positiva && !ceros){
		
		printf("%s\n", MSJ_MATRIZ, MSJ_MATRIZ_POSITIVA);
		return EXIT_SUCCESS;
	}
	if (positiva && ceros){
		
		printf("%s\n", MSJ_MATRIZ, MSJ_MATRIZ_NONEGATIVA);
			return EXIT_SUCCESS;
	}
	if (negativa && !ceros){
		
		printf("%s\n", MSJ_MATRIZ, MSJ_MATRIZ_NEGATIVA);
			return EXIT_SUCCESS;
	}
	if (negativa && ceros){
		
		printf("%s\n", MSJ_MATRIZ, MSJ_MATRIZ_NOPOSITIVA);
			return EXIT_SUCCESS;
	}


}*/


/********************************************TIPO DE MATRIZ******************************/
typedef enum {positiva/*0*/,
			  nopositiva/*1*/,
			  negativa/*2*/,
			  nonegativa/*3*/,
			  cero/*4*/,
			  nocero/*5*/
			  }tipo_t ;





tipo_t matriz_positiva (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;

	for (int i = 0; i < columnas; ++i){
		for (int j = 0; j < filas; ++j){
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

	for (int i = 0; i < columnas; ++i){
		for (int j = 0; j < filas; ++j){
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

	for (int i = 0; i < columnas; ++i){
		for (int j = 0; j < filas; ++j){
			if (M[i][j] = 0){
				return a = cero;
			}
		}
	}
	return a = nocero;
}

tipo_t tipo_matriz (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t p,n,c,tipo;

	p = matriz_positiva(M[][MAX_COLUMNAS], filas, columnas);
	n = matriz_negativa (M[][MAX_COLUMNAS], filas, columnas);
	c = matriz_cero (M[][MAX_COLUMNAS], filas, columnas);

	if (p = positiva && c = nocero){
		
		return tipo = positiva;
	}
	if (p = positiva && c = cero){
		
		return tipo = nopositiva;
	}
	if (n = negativa && c = no-ceros){
		
		return tipo = negativa;
	}
	if (n = negativa && c = ceros){
		
		return tipo = nonegativa;
	}


}

/***********************DETERMINANTE**************************************/

#define MSJ_FUERA_DE_RANGO "Matriz sobredimencionada"

int determinante (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	/* fila tiene que ser de dos o tres fila y columna*/
	int det;
	if (filas!=columnas || filas>3 || columnas>3 ){
		fprintf(stderr, "%s\n", MSJ_FUERA_DE_RANGO );
		return EXIT_FAILURE;
	}
	else if ( (filas=2) && (columnas=2)){
		det = ( M[0][0] * M[1][1] ) - ( M[0][1] * M[1][0] ) ;
	}
	else {
		det = ( ( M[0][0] * M[1][1] * M[2][2] ) + ( M[0][1] * M[1][2] * M[2][0] ) + ( M[0][2] * M[1][0] * M[2][1] ) - ( M[0][2] * M[1][1] * M[2][0] ) - ( M[0][1] * M[1][0] * M[2][2] ) - ( M[0][0] * M[1][2] * M[2][1] ) );
	}
	return det;
}


/************************************MULTIPLICACION DE MATRICES*****************************************/




int mult_mat (int A[][MAX_COLUMNAS], int B[][MAX_COLUMNAS], int C[][MAX_COLUMNAS], size_t afil, size_t acol, size_t bfil, size_t bcol){
	int i,j,v,b, k,o;
	if (afil!=bcol || bfil!=acol ){
		fprintf(stderr, "%s\n", MSJ_FUERA_DE_RANGO );
		return EXIT_FAILURE;
	}
	
	for (i = 0; i < afil; ++i)
	{
		for (k = 0; k < bcol; ++k)
		{
			v=0;
			for (j = 0; j < bfil; ++j)
			{
				
				v+= A[i][j] * B[j][k];
				C[i][k]=v;
			}
		}
	}
	return (int) C;
}


/********************************MAXIMO DE UNA MATRIZ*************************/

int maximo (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	int i=0, j=0, max;
	while (i=0 && j=0){
		max=M[0][0];
	}
	for ( i = 0; i < filas; ++i)
	{
		for (j = 0; j < columnas; ++j)
		{
			if (M[i][j]>max )
			{
				max=M[i][j];
			}
		}
	}
	return max;
}


/**********************************SUMA MAXIMA DE FILA***********************************/

int suma_fila_max (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){

	int i,j,s,m;

	for (i = 0; i < filas; ++i){
		v=0;
		for (j = 0; j < columnas; ++j){				
			s+= M[i][j];
			while (i=0 && j=0){
				max=s;
			}
			if (s>max){
				max=s;
			}
		}
	}
	return max;
}

/**********************************SUMA MAXIMA DE FILA***********************************/

int suma_col_max (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){

	int i,j,s,m;

	for (i = 0; i < filas; ++i){
		v=0;
		for (j = 0; j < columnas; ++j){				
			s+= M[j][i];
			while (i=0 && j=0){
				max=s;
			}
			if (s>max){
				max=s;
			}
		}
	}
	return max;
}