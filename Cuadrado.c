// Imprimir un Cuadrado como el de la Imagen

#include "stdio.h"
#include "stdbool.h"

void imprimirCuadrado(int n, char simbolo[]){
	for (int y = 0; y < n; y++) //* Filas (Verde)
	{
		for (int x = 0; x < n; x++) //? Columnas (Azul)
		{
			printf("%s", simbolo);
		}
		printf("\n");
	}
	
}

void imprimirCuadradoNumeros(int n, bool enFilas){
	for (int y = 0; y < n; y++) //* Filas (Verde)
	{
		for (int x = 0; x < n; x++) //? Columnas (Azul)
		{
			printf("%i ", (enFilas ? y : x) + 1);
		}
		printf("\n");
	}
	
}

int main(int argc, char const *argv[])
{
	imprimirCuadradoNumeros(5, false);
	return 0;
}
