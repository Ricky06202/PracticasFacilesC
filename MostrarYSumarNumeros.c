/**
 * Escribir un programa, en lenguaje C, que:
 * 
 * 1º) Pida por teclado dos números (datos enteros).
 * 2º) En el caso de que el primer número introducido por el usuario, 
 * no sea mayor que cero y el segundo menor que cero, muestre por pantalla el mensaje:
 * 
 * "ERROR: El primer número debe ser mayor que cero y el segundo menor que cero."
 * 
 * En caso contrario, muestre por pantalla los números que hay entre los 
 * dos números introducidos por el usuario, ambos inclusive, así como, la suma de todos ellos.
*/

#include "stdio.h"

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

#include "stdbool.h"

bool EstanCorrectosLosNumeros(int numero1, int numero2){
	if (!(numero1 > 0 && numero2 < 0))
		printf("ERROR: El primer número debe ser mayor que cero y el segundo menor que cero.");
	return numero1 > 0 && numero2 < 0;
}

int sumaTotal = 0;

void mostrarNumerosEntre(int final, int inicio){
	for (int i = inicio; i <= final; i++){
		printf("%i ", i);
		sumaTotal += i;
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int numero1 = leerNumero("Introduzca el primer Numero: ");
	int numero2 = leerNumero("Introduzca el segundo Numero: ");
	if(!EstanCorrectosLosNumeros(numero1, numero2))
		return 1;
	mostrarNumerosEntre(numero1, numero2);
	printf("La suma de estos numeros es de: %i", sumaTotal);
	return 0;
}
