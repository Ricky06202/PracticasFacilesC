// Calcular e imprimir la sumatoria de la imagen Serie1

float calcularSumatoria(){
	float suma = 0;
	for (int i = 1; i <= 50; i++)
		suma += 1.0f/i;
	return suma;
}

#include "stdio.h"

int main(int argc, char const *argv[])
{
	printf("%f", calcularSumatoria());
	return 0;
}
