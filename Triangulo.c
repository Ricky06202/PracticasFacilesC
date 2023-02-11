// Imprimir un Triangulo como el de la Imagen

#include "stdio.h"

void imprimirTriangulo(int ancho){
	int alto = ancho * 2 - 1;
	int cantidadADibujar = 1;
	int cantidadAgregar= 1;
	for (int y = 0; y < alto; y++)
	{
		for (int x = 0; x < cantidadADibujar; x++)
			printf("X ");
		if (cantidadADibujar == ancho)
			cantidadAgregar = -1;
		printf("\n");
		cantidadADibujar += cantidadAgregar;
	}
}

int main(int argc, char const *argv[])
{
	imprimirTriangulo(21);
	return 0;
}
