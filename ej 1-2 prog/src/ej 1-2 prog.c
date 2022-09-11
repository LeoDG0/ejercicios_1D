/*
 ============================================================================
 Name        : ej.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero1;
	int numero2;
	int numero3;

	setbuf(stdout, NULL);

	printf("Ingrese numero 1: ");
	scanf("%d", &numero1);

	printf("Ingrese numero 2: ");
	scanf("%d", &numero2);

	printf("Ingrese numero 3: ");
	scanf("%d", &numero3);


	if(numero1 > numero2 && numero1 > numero3){
		printf("El mayor de los numeros es el primero: %d", numero1);
	}
	else if(numero2 > numero1 && numero2 > numero3){

		printf("El mayor de los numeros es el segundo: %d", numero2);
	}
	else{
		printf("El mayor de los numeros es el tercero: %d", numero3);
	}



	return EXIT_SUCCESS;
}
