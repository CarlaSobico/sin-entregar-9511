/*
Probabilidades) Implementar las siguientes funciones de probabilidad:

 A   P(X=x)=⎧⎩⎨⎪⎪0.2 x=0
    0.8 x=1
    0 ∀ otra x

B P(X=3)=0.1,P(X=5)=0.55,P(x=9)=0.35

C Una moneda: imprime 'H' ó 'T' (o bien, "Cara" o "Ceca")

D Un dado; imprime lo siguiente (según corresponda):

|     |   |    *|   |*    |   |*   *|   |*   *|   |*   *|
|  *  |   |     |   |  *  |   |     |   |  *  |   |*   *|
|     |   |*    |   |    *|   |*   *|   |*   *|   |*   *|

*/

/* 
A switch case 1 case 0 default 0
B swhtch case 3 case 5 case 9 ERROR
C random entre 0 y 1 siendo float if random menor 0.5 HEAD else TALE
D random entre 0 y 1 y cada 1.666666667 cambia ooooo rnadom entre 1 y 6 y switch cambiando entrre 
cada numero un dibujo
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MSJ_FUERA_DE_RANGO "El dato ingresado no se encuentra"
#define MSJ_ERROR "ERROR"

/**************************probabilia a***************************/
int probabilidad_a (void)
{
	int g;
	float P;
	srand (time (NULL));


	P=(float) rand()/RAND_MAX ;

	if (0<P && P<=0.2)	{
		g=0;
	}
	else if (0.2<P && P<=1)	{
		g=1;
	}
	else printf("%s\n", MSJ_FUERA_DE_RANGO );

	/* if ( rand(0, 100) <= 20 ){
     	g=0;
 	 }
 	 else if (20<rand(0,100) && rand(0,100)<100 )
 	 {
 	 	g=1;
 	 }*/

	return g;

}


/*************************************probabilidad b*********************/
int probabilidad_b (void)
{
	int p;
	float P;
	srand (time (NULL));
	
	P=rand()/RAND_MAX;

	if (0<P && P<=0.1)
	{
		p=3;
	}
	else if (0.1<P && P<=0.65)
	{
		p=5;
	}
	else if (0.65<P && P<= 1)
	{
		p= 9;
	}
	else
		printf("%s\n", MSJ_FUERA_DE_RANGO );

	return p;
}

/******************************moneda****************************/

#define MSJ_MONEDA_HEAD "HEAD"
#define MSJ_MONEDA_TAIL "TAIL"

typedef enum {
	HEAD, TAIL
}lado_t;

int moneda (void)
{
	int a;
	srand (time (NULL));

	a=rand();
	a=a%2;/*el resto va a ser 0 o 1*/

	switch (a){
		case (0):
			return 0;
			break;
		case (1):
			return 1;
			break;
		default:
			return -1;
			break;
	}
	
}

void imprimir_moneda (void){
	int l;
	l=moneda();
	

	switch (l){
		case(0):
			printf("%s\n", MSJ_MONEDA_HEAD );
			break;
		case(1):
			printf("%s\n", MSJ_MONEDA_TAIL);
			break;
		default:
			break;
	}
}


/******************************dado**********************/
#define DBJ_0 "|     |"
#define DBJ_1_LEFT "|*    |"
#define DBJ_1_MIDDLE "|  *  |"
#define DBJ_1_RIGHT "|    *|"
#define DBJ_2 "|*   *|"



int tirar_dado (void){

	int c;

	srand (time (NULL));

	c=rand();
	c=(c%6)+1; 
	return c;
}

int imprimir_dado (int c){
	switch (c)
	{
		case (1):
			printf(" %s\n %s\n %s\n",DBJ_0, DBJ_1_MIDDLE, DBJ_0 );
			break;

		case (2):
			printf(" %s\n %s\n %s\n",DBJ_1_RIGHT, DBJ_0, DBJ_1_LEFT );
			break;

		case (3):
			printf(" %s\n %s\n %s\n",DBJ_1_LEFT, DBJ_1_MIDDLE, DBJ_1_RIGHT );
			break;

		case (4):
			printf(" %s\n %s\n %s\n",DBJ_2, DBJ_0, DBJ_2 );
			break;
						
		case (5):
			printf(" %s\n %s\n %s\n",DBJ_2, DBJ_1_MIDDLE, DBJ_2 );
			break;
			
		case (6):
			printf(" %s\n %s\n %s\n",DBJ_2, DBJ_2, DBJ_2 );
			break;
		
		default:
			fprintf(stderr, "%s\n", MSJ_FUERA_DE_RANGO);
			break;

	}
	return EXIT_SUCCESS;

}




