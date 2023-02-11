// Leer tres números enteros e indicar si están desordenados, en caso contrario en qué orden están. 

#include "stdio.h"

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf("%i", &numero);
	return numero;
}

void indicarOrden(int numero1, int numero2, int numero3){
	if(numero1 > numero2 && numero2 > numero3)
		printf("Estan en orden descendente");
	else if (numero1 < numero2 && numero2 < numero3)
		printf("Estan en orden ascendente");
	else
		printf("Estan desordenados");
}

int main(int argc, char const *argv[])
{
	int numero1 = leerNumero("Ingrese el Primer Numero: ");
	int numero2 = leerNumero("Ingrese el Segundo Numero: ");
	int numero3 = leerNumero("Ingrese el Tercer Numero: ");

	indicarOrden(numero1, numero2, numero3);
	return 0;
}
