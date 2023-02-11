/**
 * Escribir un programa, en lenguaje C, que:
 * 
 * 1º) Pida por teclado el radio (dato real) de una esfera.
 * 2º) En el caso de que el radio sea menor o igual que 0, muestre por pantalla el mensaje:
 * 
 * "ERROR: El radio debe ser mayor que cero.".
 * 
 * 3º) Repita los pasos 1º y 2º, mientras que, el radio introducido sea incorrecto.
 * 4º) Muestre por pantalla:
 * 
 * "El área de una esfera de radio <radio> es: <área>".
 * 
 * Nota 1: Área de una esfera = 4 * pi * radio2
 * Nota 2: Utilice un bucle mientras (while).
*/

#include "stdio.h"

float leerNumero(char mensaje[]){
	printf(mensaje);
	float numero;
	scanf("%f", &numero);
	return numero;
}

#include "stdbool.h"

bool esMayorA0(float numero){
	return numero > 0;
}

#include "math.h"
#define PI 3.141592653589793238

int main(int argc, char const *argv[])
{
	while (true)
	{
		float radioEsfera = leerNumero("Introduzca el radio de una Esfera: ");
		if (!esMayorA0(radioEsfera)){
			printf("ERROR: El radio debe ser mayor que cero.\n");
			continue;
		}
		float areaEsfera = 4 * PI * pow(radioEsfera,2);
		printf("Para una esfera de radio %f, El área es de: %f\n",radioEsfera, areaEsfera);
		break;
	}

	return 0;
}
