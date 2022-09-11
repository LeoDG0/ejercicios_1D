/*
 ============================================================================
 Name        : 2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 7

int main(void) {

	int numeros;
	int acumulador = 0;
	int contador = 0;
	float promedio;

	setbuf(stdout, NULL);

	for(int i = 0; i < TAM; i++){

		printf("Ingrese numeros: ");
		scanf("%d", &numeros);

		acumulador += numeros;
		contador++;
	}

	promedio = (float) acumulador / contador;

	printf("El promedio es %.2f", promedio);


	return EXIT_SUCCESS;
}
