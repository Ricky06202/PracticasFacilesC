// Imprimir un Paralelogramo como el de la Imagen

#include "stdio.h"

void imprimirParalelogramo(int ancho){
	int alto = ancho / 2 + 1;
	int cantidadDibujar = ancho;
	int cantidadEspacios = 0;
	for (int y = 0; y < alto; y++)
	{
		for (int x = 0; x <= cantidadEspacios; x++)
		{
			if (x < cantidadEspacios)
				printf("  ");
			else
				for (int i = 0; i < cantidadDibujar; i++)
					printf("X ");
		}
		printf("\n");
		cantidadEspacios++;
	}
	
}

int main(int argc, char const *argv[])
{
	imprimirParalelogramo(10);
	return 0;
}