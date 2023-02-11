// Calcular e imprimir la sumatoria de la imagen Serie3

#include "math.h"

float calcularSumatoria(int n){
	float suma = 0;
	for (int i = 1; i <= n; i++)
		suma += i/pow(2, i) * pow(-1, i+1);
	return suma;
}

#include "stdio.h"

int main(int argc, char const *argv[])
{
	printf("%f", calcularSumatoria(100));
	return 0;
}
