/*
Implementar las siguientes funciones. Todas ellas reciben el radio y la altura de un cilindro y retornan un número real i.e. r∈ℝ

:

    cilindro_diametro(),
    cilindro_circunferencia(),
    cilindro_base(), y
    cilindro_volumen().

*/

/*
diametro=radio*2
circunferencia= pi*diametro=pi*radio*2
area de la base= pi * radio * radio =circunferencia/2 * radio
volumen= pi *radio * radio * altura = area de la base * altura
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265359
#endif

float cilindro_diametro (float radio){
	float diametro;
	return diametro = radio * 2;
}

float cilindro_circunferencia (float radio){
	/*float diametro, circunferencia;*/
	diametro = /*cilindro_diametro(radio)*/ radio*2;
	return circunferencia = M_PI * diametro;
}

float cilindro_base (float radio){	
	float base;
	return base = M_PI * radio * radio;
}

float cilindro_volumen (float radio, float altura){
	float base, volumen;
	base = cilindro_base(radio);
	return volumen = base * altura;
}


/*int main()
{
	float a, radio=8, altura=10;
 	a=cilindro_diametro(radio, altura);
 	printf("%f\n", a );
	return 0;
}*/