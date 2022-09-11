/*
 ============================================================================
 Name        : 2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int numero;

	setbuf(stdout, NULL);

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	if(numero % 2 == 0){

		printf("El %d es par", numero);

	}else{
		printf("El %d es impar", numero);
	}


	return EXIT_SUCCESS;
}
