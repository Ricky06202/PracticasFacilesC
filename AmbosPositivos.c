// Leer dos números enteros por teclado, e imprimir ambos números sólo si son positivos los dos

#include "stdio.h"

int leer(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf("%i", &numero);
	return numero;
}

void imprimirAmbos(int numero1, int numero2){
	if (numero1 > 0 && numero2 > 0)
		printf("%i, %i", numero1, numero2);
}

int main(int argc, char const *argv[])
{
	int numero1 = leer("Ingrese el primer Numero: ");
	int numero2 = leer("Ingrese el segundo Numero: ");

	imprimirAmbos(numero1, numero2);
	return 0;
}

