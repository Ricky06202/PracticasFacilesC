/**
 * Escribir un programa, en lenguaje C, que:
 * 
 * 1º) Pida por teclado dos números (datos enteros).
 * 2º) Muestre por pantalla el mensaje:
 * 
 * La suma es <suma>
 * 
 * 3º) Pregunte al usuario si desea realizar otra suma o no.
 * 4º) Repita los pasos 1º, 2º y 3º, mientras que, el usuario no responda 'n' de (no).
 * 5º) Muestre por pantalla la suma total de los números introducidos.
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

int sumaTotal = 0;

void mostrarSuma(int numero1, int numero2){
	int suma = numero1 + numero2;
	sumaTotal += suma;
	printf("La suma es %i\n", suma);
}

#include "stdbool.h"

bool deseaRealizarOtraSuma(){
	while (true)
	{
		printf("Desea realizar otra suma? (s/n) ");
		char quiereRealizarOtraSuma;
		scanf_s(" %c", &quiereRealizarOtraSuma);
		if (quiereRealizarOtraSuma == 's' || quiereRealizarOtraSuma == 'n')
			return quiereRealizarOtraSuma == 's';
		printf("Debe ingresar 's' o 'n'\n");
	}
}

int main(int argc, char const *argv[])
{
	do {
		int numero1 = leerNumero("Ingrese el primer numero: ");
		int numero2 = leerNumero("Ingrese el segundo numero: ");
		mostrarSuma(numero1, numero2);
	} while(deseaRealizarOtraSuma());
	printf("La suma total es de: %i", sumaTotal);
	return 0;
}
