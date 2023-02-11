// Leer un número entero por teclado y calcular e imprimir su raíz cuadrada.

#include "stdio.h"
#include "math.h"

int leer(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf("%i", &numero);
	return numero;
}

void imprimirRaizCuadrada(int numero){
	float raizCuadrada = sqrt(numero);
	printf("La raiz Cuadrada de %i es: %f", numero, raizCuadrada);
}

int main(int argc, char const *argv[])
{
	int numero = leer("Ingrese un numero: ");
	imprimirRaizCuadrada(numero);
	return 0;
}
