// Imprimir un Rombo como el de la Imagen

#include "stdio.h"

void imprimirRombo(int ancho){
	int alto = ancho;
	int mitadAncho = alto / 2;
	int mitadAlto = mitadAncho;
	int cantidadPintar = 1;
	int cantidadAgregar = 2;
	int cantidadAgregarEspacios = -1;
	for (int y = 0; y < alto; y++)
	{
		for (int x = 0; x <= mitadAncho; x++)
		{
			if(x < mitadAncho)
				printf("  ");
			else
				for (int i = 0; i < cantidadPintar; i++)
					printf("X ");
		}
		if (y == mitadAlto){
			cantidadAgregar *= -1;
			cantidadAgregarEspacios *= -1;
		}
		printf("\n");
		cantidadPintar += cantidadAgregar;
		mitadAncho += cantidadAgregarEspacios;
	}
}

int main(int argc, char const *argv[])
{
	imprimirRombo(11);
	return 0;
}
