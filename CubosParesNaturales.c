/**
 * Escribir un programa, en lenguaje C, que muestre por pantalla los cinco primeros 
 * números naturales pares elevados al cubo.
 * 
 * Nota 1: Cubo de un número = número3
 * Nota 2: Utilice un bucle para (for).
*/

#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 5; i++)
		printf("%i ", (int)pow(i * 2, 3));
	return 0;
}
