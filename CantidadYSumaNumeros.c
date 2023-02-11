/**
 * Escribir un programa, en lenguaje C, que:
 * 
 * 1º) Pida por teclado un número (dato entero).
 * 2º) Repita el paso 1º, mientras que, el número introducido sea distinto de cero.
 * 3º) Muestre cuántos números mayores que cero han sido introducidos por el usuario, 
 * así como, la suma de todos ellos.
*/

#include "stdio.h"

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

#include "stdbool.h"

int main(int argc, char const *argv[])
{
	int cantidadNumerosPositivos = 0;
	int sumaTotal = 0;
	while (true)
	{
		int numero = leerNumero("Ingrese un numero: ");
		if (numero > 0){
			cantidadNumerosPositivos++;
			sumaTotal += numero;
		}
		if(numero == 0)
			break;
	}
	printf("Numeros Mayores que 0: %i\n", cantidadNumerosPositivos);
	printf("La Suma Total es de: %i\n", sumaTotal);
	
	return 0;
}
