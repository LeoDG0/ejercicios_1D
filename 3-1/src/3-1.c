/*
 ============================================================================
 Name        : 3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarEntero(int);

int main(void) {

	int numero;

	setbuf(stdout, NULL);

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	mostrarEntero(numero);


	return EXIT_SUCCESS;
}

void mostrarEntero(int num){

	int entero = num;

	printf("El numero recibido es: %d", entero);

}
