/**
 * Desarrolle un programa que lea por teclado un valor entero X e, 
 * interpretando este valor como el número de segundos que dura un evento, 
 * calcule y muestre por pantalla cuántos días, horas, minutos y segundos representa X. 
*/

#include "stdio.h"

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

typedef struct{
	int dias, horas, minutos, segundos;
}Evento;

const int minuto = 60;
const int hora = 60 * minuto;
const int dia = 24 * hora;


Evento transformar(int sengundos){
	Evento tiempo;
	tiempo.dias = sengundos / dia;
	sengundos %= dia;
	tiempo.horas = sengundos / hora;
	sengundos %= hora;
	tiempo.minutos = sengundos / minuto;
	tiempo.segundos = sengundos % minuto;
	return tiempo;
}

int main(int argc, char const *argv[])
{
	int segundos = leerNumero("Ingrese la Duracion del Evento en Segundos: ");
	Evento duracion = transformar(segundos);
	printf("La duracion del evento es de %i dias, %i horas, %i minutos, %i segundos",
	duracion.dias, duracion.horas, duracion.minutos, duracion.segundos);
	return 0;
}
