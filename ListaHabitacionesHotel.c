/**
 * En la siguiente tabla se muestra el número de camas de las habitaciones de un hotel, 
 * además de la planta donde está ubicada cada una de ellas
 * 
 * Habitacion					Camas	Planta
 * 1.Individual					1		Primera
 * 2.Doble de uso individual	2		Segunda
 * 3.Doble						2		Tercera
 * 4.Con cama supletoria		3		Primera
 * 5.Triple						3		Segunda
 * 6.Junior Suites				3		Segunda
 * 7.Suites						2		Tercera
 * 
 * a) Muestre el listado de las habitaciones del hotel.
 * b) Pida por teclado el número (dato entero) asociado a una habitación.
 * c) Muestre por pantalla la planta y el número de camas de la habitación seleccionada.
 * 
 * Nota: Si el número introducido por el usuario, no está asociado a ninguna habitación, 
 * muestre el siguiente mensaje: "ERROR: número de habitación no existe.".
*/

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void mostrarListaHabitaciones(){
	printf("Habitaciones:\n");
	printf("1. Individual\n");
	printf("2. Doble de uso Individual\n");
	printf("3. Doble\n");
	printf("4. Con cama supletoria\n");
	printf("5. Triple\n");
	printf("6. Junior Suites\n");
	printf("7. Suites\n\n");
}

int leerNumero(char mensaje[]){
	printf(mensaje);
	int numero;
	scanf("%i", &numero);
	return numero;
}

void elegirHabitacion(int numero){
	int cantidadCamas;
	char planta[8];
	switch (numero)
	{
	case 1:
		cantidadCamas = 1;
		strcpy(planta, "Primera");
		break;
	case 2:
		cantidadCamas = 2;
		strcpy(planta, "Segunda");
		break;
	case 3:
		cantidadCamas = 2;
		strcpy(planta, "Tercera");
		break;
	case 4:
		cantidadCamas = 3;
		strcpy(planta, "Primera");
		break;
	case 5:
		cantidadCamas = 3;
		strcpy(planta, "Segunda");
		break;
	case 6:
		cantidadCamas = 3;
		strcpy(planta, "Segunda");
		break;
	case 7:
		cantidadCamas = 2;
		strcpy(planta, "Tercera");
		break;
	
	default:
		printf("ERROR: número de habitación no existe.");
		exit(1);
		break;
	}
	printf("La Habitacion Seleccionada Se encuentra en la %s planta y tiene %i cama%s",
	planta, cantidadCamas, cantidadCamas > 1 ? "s" : "");
}

int main(int argc, char const *argv[])
{
	mostrarListaHabitaciones();
	int numeroHabitacion = leerNumero("Ingrese el Numero de la Habitacion: ");
	elegirHabitacion(numeroHabitacion);
	return 0;
}
