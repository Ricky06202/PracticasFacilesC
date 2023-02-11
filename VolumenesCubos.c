/**
 * Escribir un programa, en lenguaje C, que:
 * 
 * 1º) Pida por teclado la arista (dato real) de un cubo.
 * 2º) En el caso de que la arista sea mayor que cero, muestre por pantalla el mensaje:
 * 
 * "El volumen del cubo de arista <arista> es: <volumen>".
 * 
 * 3º) Repita los pasos 1º y 2º, mientras que, la arista introducida sea mayor que cero.
 * 4º) Muestre por pantalla cuantos volúmenes de cubos han sido calculados.
 * 
 * Nota 1: Volumen de un cubo = arista3
 * Nota 2: Utilice un bucle mientras (while).
*/

#include "stdio.h"

float leerNumero(char mensaje[]){
	printf(mensaje);
	float numero;
	scanf_s("%f", &numero);
	return numero;
}

#include "stdbool.h"

bool esMayorA0(float numero){
	return numero > 0;
}

#include "math.h"

int main(int argc, char const *argv[])
{
	int cantidadCubos = 0;
	while (true)
	{
		float aristaCubo = leerNumero("Introduzca la Arista de un Cubo: ");
		if (esMayorA0(aristaCubo)){
			float volumenCubo = pow(aristaCubo, 3);
			printf("Para el cubo de arista %f, El volumen es de: %f\n", aristaCubo, volumenCubo);
			cantidadCubos++;
			continue;
		}
		printf("Hemos calculado %i Cubo%s", cantidadCubos, cantidadCubos > 1 ? "s" : "");
		break;
	}
	
	return 0;
}
