// Calcular e imprimir la sumatoria de la imagen Serie2

float calcularSumatoria(){
	float suma = 0;
	for (int i = 1; i < 50; i++)
		suma += (float)i/(i+1);
	return suma;
}

#include "stdio.h"

int main(int argc, char const *argv[])
{
	printf("%f", calcularSumatoria());
	return 0;
}
