// Imprimir una Flecha como la de la Imagen

#include "stdio.h"

void imprimirTriangulo(int ancho){
	int mitad = ancho / 2;
	int alto = mitad + 1;
	int cantidadADibujar = 1;
	for (int y = 0; y < alto; y++)
	{
		for (int x = 0; x <= mitad; x++)
		{
			if(x < mitad)
				printf("  ");
			else
				for (int i = 0; i < cantidadADibujar; i++)
					printf("X ");
		}
		printf("\n");
		cantidadADibujar += 2;
		mitad--;
	}
}

void imprimirRectangulo(int ancho){
	int mitad = ancho / 2;
	int alto = mitad + 1;
	int cantidadADibujar = mitad - 1;
	int cantidadEspacios = mitad / 2 + 1;

	for (int y = 0; y < alto; y++)
	{
		for (int x = 0; x <= cantidadEspacios; x++)
		{
			if (x < cantidadEspacios)
				printf("  ");
			else
				for (int i = 0; i < cantidadADibujar; i++)
					printf("X ");
		}
		printf("\n");
	}
	
}

void imprimirFlecha(int ancho){
	imprimirTriangulo(ancho);
	imprimirRectangulo(ancho);
}

int main(int argc, char const *argv[])
{
	imprimirFlecha(21);
	imprimirFlecha(5);
	imprimirFlecha(7);
	imprimirFlecha(9);
	return 0;
}
