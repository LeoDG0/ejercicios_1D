/*
 ============================================================================
 Name        : 2-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 9

int main(void) {

	//int cantIngreso = 1;
	int numeros[8];
	int mayor;
	int menor;
	int mayorPar;
	int numerosNegativos = 0;
	int numerosNegativosCont = 0;
	int producto;



	setbuf(stdout, NULL);

	for(int i = 1; i < TAM; i++){

		printf("Ingrese el numero %d: ", i);
		scanf("%d", &numeros[i]);

		if(numeros[i] == 0){

			printf("Ingrese un valor distinto a cero!\n");
			numeros[i]--;
			i--;
		}
		else{
			printf("Numero ingresado!\n\n");
		}



		if(numeros[i] < 0){
			numeros[i] += numerosNegativos;
			numerosNegativosCont++;
		}

	}

	for(int i = 0; i < TAM; i++){

		if(mayor < numeros[i]){

			mayor = numeros[i];
		}

		if(menor > numeros[i]){

			menor = numeros[i];
		}
	}

	for(int i = 0; i < TAM; i++){

		if(numeros[i] % 2 == 0)
		{
			if(mayor < numeros[i])
			{
				mayorPar = numeros[i];
			}
		}
	}

	producto = numerosNegativos * numerosNegativosCont;






printf("\n\nEl menor numero ingresado es: %d\n\n", menor);
printf("El numero mayor entre los pares es: %d\n\n", mayorPar);
printf("El producto de los pares es: %d\n\n", producto);
printf("sexo");



	return EXIT_SUCCESS;
}
