/**
 * Escribir un programa, en lenguaje C, que muestre por pantalla todos los números 
 * múltiplos de 3 que hay entre el -15 y el -3, ambos inclusive.
 * 
 * Nota: Utilice un bucle para (for).
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	for (int i = -15; i <= -3; i++)
		if (i % 3 == 0)
			printf("%i ", i);
	return 0;
}
