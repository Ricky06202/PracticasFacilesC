// Leer un número entero, por teclado, y determinar si es un número par o impar.

#include "stdio.h"
#include "stdbool.h"

int leer(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf("%i", &numero);
	return numero;
}

bool esPar(int numero){
	return numero % 2 == 0;
}

int main(int argc, char const *argv[])
{
	int numero = leer("introduzca un numero: ");
	// if (esPar(numero)) {
	// 	printf("es par");
	// }else{
	// 	printf("es impar");
	// }
	printf("es %s", esPar(numero) ? "Par" : "Impar");
	return 0;
}

