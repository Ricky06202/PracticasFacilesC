/**
 * Escribir un programa, en lenguaje C, que:
 * 
 * 1º) Pida por teclado un número (dato entero).
 * 2º) Muestre por pantalla los mensajes:
 * 
 *     Ha introducido <cantidad_de_números> número(s)
 *     La suma es <suma>
 * 
 * 3º) Pregunte al usuario si desea introducir otro o no.
 * 4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no responda 'n' de (no).
 * 5º) Muestre por pantalla la media aritmética (dato real) de los números introducidos.
 * 
 * Nota: Utilice un bucle hacer mientras (do while).
*/

#include "stdio.h"

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

float mediaAritmetica;

void mostrarInformacion(int numero){
	static int cantidadNumeros = 0, suma = 0;
	cantidadNumeros++;
	suma += numero;
	mediaAritmetica = (float)suma / cantidadNumeros;
	printf("Ha introducido %i número%s\n", cantidadNumeros, cantidadNumeros > 1 ? "s" : "");
	printf("La suma es %i\n", suma);
}

#include "stdbool.h"

bool deseaIntroducirOtroNumero(){
	while (true)
	{
		printf("Desea Introducir Otro Numero? (s/n): ");
		char quiereIntroducirOtroNumero;
		scanf_s(" %c", &quiereIntroducirOtroNumero);
		if (quiereIntroducirOtroNumero == 's' || quiereIntroducirOtroNumero == 'n')
			return quiereIntroducirOtroNumero == 's';
		printf("Error debe introducir 's' o 'n'\n");
	}
}

int main(int argc, char const *argv[])
{
	do {
		int numero = leerNumero("Introduzca un numero: ");
		mostrarInformacion(numero);
	} while(deseaIntroducirOtroNumero());
	printf("La media Aritmetica es de: %f", mediaAritmetica);
	return 0;
}
