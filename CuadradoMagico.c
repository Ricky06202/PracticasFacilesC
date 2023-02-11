// realizar un cuadrado magico siguiendo las instrucciones del pdf

#include "stdio.h"

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

#include "stdbool.h"

int leerNumeroPositivoImpar(char mensaje[]){
	while (true)
	{
		int numero = leerNumero(mensaje);
		if(numero > 0 && numero % 2 == 1)
			return numero;
		printf("Error el numero debe ser positivo e impar\n");
	}
}

void llenar(int orden, int cuadradoMagico[][orden]){
	int posicionInicialX = orden/2;
	int posicionInicialY = -orden/2;
	int posicionActualX = posicionInicialX;
	int posicionActualY = posicionInicialY;
	int enumerador = 1;
	while (enumerador <= orden * orden)
	{
		if(posicionActualX < 0)
			posicionActualX += orden;
		if(posicionActualX >= orden)
			posicionActualX -= orden;

		if(posicionActualY < 0)
			posicionActualY += orden;
		if(posicionActualY >= orden)
			posicionActualY -= orden;

		cuadradoMagico[posicionActualY][posicionActualX] = enumerador++;
		posicionActualX++;
		posicionActualY++;

		if(enumerador % orden == 1){
			posicionActualX = --posicionInicialX;
			posicionActualY = ++posicionInicialY;
		}
	}	
}

void inicializar(int orden, int cuadradoMagico[][orden]){
	for (int i = 0; i < orden; i++)
		for (int j = 0; j < orden; j++)
			cuadradoMagico[i][j] = 0;	
}

void mostrar(int orden, int cuadradoMagico[][orden]){
	for (int i = 0; i < orden; i++){
		for (int j = 0; j < orden; j++)
			printf("%2i ", cuadradoMagico[i][j]);	
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int orden = leerNumeroPositivoImpar("Introduzca el orden del cuadrado magico: ");
	int cuadradoMagico[orden][orden];
	inicializar(orden, cuadradoMagico);
	llenar(orden, cuadradoMagico);
	mostrar(orden, cuadradoMagico);
	return 0;
}
