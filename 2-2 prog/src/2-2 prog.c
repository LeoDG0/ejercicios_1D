/*
 ============================================================================
 Name        : 2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int numeros;
	char respuesta = 's';
	int acumPositivos = 0;
	int acumNegativos = 0;
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	float promedioPositivo;
	float promedioNegativo;
	int minimoPositivo = 0;
	int maximoNegativo = 0;


	setbuf(stdout, NULL);

	do{

		printf("Ingrese numero: ");
		scanf("%d", &numeros);

		if(numeros > 0){
			acumPositivos += numeros;
			contadorPositivos++;
		}
		else if(numeros < 0){
			acumNegativos += numeros;
			contadorNegativos++;
		}else{
			printf("No ingreso un dato valido!\n\n");

		}

		maximoNegativo = numeros;
		minimoPositivo = numeros;

		if(numeros > maximoNegativo){
			maximoNegativo = numeros;
		}

		if(numeros < minimoPositivo){
			minimoPositivo = numeros;
		}

		printf("Desea seguir agregando?(s/n): ");
		fflush(stdin);
		scanf("%c", &respuesta);


	}while(respuesta != 'n');


	promedioPositivo = (float) acumPositivos / contadorPositivos;

	promedioNegativo = (float) acumNegativos / contadorNegativos;

	printf("El promedio de los Nros Positivos es %.2f y su minimo es %d\n", promedioPositivo, minimoPositivo);
	printf("El promedio de los Nros Negativos es %.2f y su maximo es %d\n", promedioNegativo, maximoNegativo);


	return EXIT_SUCCESS;
}

