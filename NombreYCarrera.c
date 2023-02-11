// Leer e imprimir, para un estudiante, el nombre y la carrera que estudia

#include "stdio.h"

void leerNombre(char mensaje[], char nombre[]){
	printf(mensaje);
	scanf("%s", nombre);
}

void leerCarrera(char mensaje[], char carrera[]){
	printf(mensaje);
	scanf(" %[^\n]", carrera);
}

int main(int argc, char const *argv[])
{
	char nombre[15], carrera[15*3];
	leerNombre("Ingrese su Nombre: ", nombre);
	leerCarrera("Ingrese su Carrera: ", carrera);
	printf("Hola %s!\nEstas en la Carrera: %s", nombre, carrera);
	return 0;
}


