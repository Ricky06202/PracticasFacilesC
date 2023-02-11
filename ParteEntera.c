// Leer un número en formato real e imprimir su parte entera.

#include "stdio.h"

float leer(char mensaje[]){
	printf(mensaje);
	float numero;
	scanf("%f", &numero);
	return numero;
}

void imprimirParteEntera(float numero){
	printf("%i", (int) numero);
}

int main(int argc, char const *argv[])
{
	float numero = leer("Ingrese un numero real: ");
	imprimirParteEntera(numero);
	return 0;
}