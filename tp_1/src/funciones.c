/*
 * funciones.c
 *
 *  Created on: 6 sep. 2019
 *      Author: LOREN
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define EXIT_ERROR -1

/*
 * brief Solicita un numero al usuario y lo valida
 * param resultado se carga el numero ingresado
 * param mensaje es el mensaje a ser mostrado
 * param mensajeError es el mensaje a ser mostrado en caso de error
 * param minimo numero inferior a validar
 * param maximo numero maximo a validar
 * return si obtuvo el numero 0 si no -1
 *
 */
int getInt(int *resultado, char *mensaje, char *mensajeError, int minimo,
		int maximo, int reintentos) {
	int retorno = EXIT_ERROR;
	int buffer;
	if (resultado != NULL && mensaje != NULL && mensajeError != NULL
			&& minimo < maximo && reintentos >= 0) {
		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (scanf("%d", &buffer) == 1) {
				if (buffer >= minimo && buffer <= maximo) {
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s", mensajeError);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

/*
 * brief Solicita un numero al usuario y lo valida
 * param resultado se carga el numero ingresado
 * param mensaje es el mensaje a ser mostrado
 * param mensajeError es el mensaje a ser mostrado en caso de error
 * param minimo numero inferior a validar
 * param maximo numero maximo a validar
 * return si obtuvo el numero 0 si no -1
 *
 */

int getFloat(float *resultado, char *mensaje, char *mensajeError, float minimo,
		float maximo, int reintentos) {
	int retorno = EXIT_ERROR;
	float buffer;
	if (resultado != NULL && mensaje != NULL && mensajeError != NULL
			&& minimo < maximo && reintentos >= 0) {
		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (scanf("%f", &buffer) == 1) {
				if (buffer >= minimo && buffer <= maximo) {
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s", mensajeError);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

/*
 * brief Solicita un caracter al usuario y lo valida
 * param resultado se carga el caracter ingresado
 * param mensaje es el mensaje a ser mostrado
 * param mensajeError es el mensaje a ser mostrado en caso de error
 * param minimo numero inferior a validar
 * param maximo numero maximo a validar
 * return si obtuvo el caracter 0 si no -1
 *
 */

int getChar(char *resultado, char *mensaje, char *mensajeError, char minimo,
		char maximo, int reintentos) {
	int retorno = EXIT_ERROR;
	char buffer;
	if (resultado != NULL && mensaje != NULL && mensajeError != NULL
			&& minimo < maximo && reintentos >= 0) {
		do {
			printf("%s", mensaje);
			fflush(stdin);
			if (scanf("%c", &buffer) == 1) {
				if (buffer >= minimo && buffer <= maximo) {
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s", mensajeError);
			reintentos--;
		} while (reintentos >= 0);
	}
	return retorno;
}

/*
 * brief Muestra el menu principal
 * param numeroA es el primer valor ingresado
 * param numeroB es el primer valor ingresado
 * return void
 */
void menuPrincipal(int numeroA, int numeroB) {
	printf("Ingrese 1 para ingresar el valor de A: %d \n", numeroA);
	printf("Ingrese 2 para ingresar el valor de B: %d \n", numeroB);
	printf("Ingrese 3 para elegir las operaciones \n");
	printf("Ingrese 4 para ver los resultados\n");
	printf("Ingrese 5 para salir \n");
}

/*
 * brief Muestra el menu que contiene las operaciones
 * param opcion es el caracter ingresado
 * return void
 */

void menuOperaciones(char *opcion) {
	char opcionBuffer;

	printf("Ingrese la letra A para la suma \n");
	printf("Ingrese la letra B para la resta \n");
	printf("Ingrese la letra C para la division \n");
	printf("Ingrese la letra D para la multiplicacion \n");
	printf("Ingrese la letra E para el factorial \n");

	getChar(&opcionBuffer, "La letra ingresada es:", "Error", 'A', 'E', 2);

	*opcion=opcionBuffer;
}

/*
 * brief procesa y muestra las operaciones
 * param numeroA es el primer valor ingresado
 * param numeroB es el segundo valor ingresado
 * param operaciones es el caracter de la operacion a realizar
 * return void
 */

void calcularOperaciones(float numeroA, float numeroB, char operaciones) {

	switch (operaciones) {
	case 'A':

		printf("La suma es: %f\n", suma(numeroA, numeroB));
		break;

	case 'B':
		printf("La resta es: %f\n", resta(numeroA, numeroB));
		break;

	case 'C':
		if (numeroB == 0) {
			printf("No se puede dividir por 0");
		} else {
			printf("La division es: %f\n", division(numeroA, numeroB));
		}
		break;

	case 'D':
		printf("La multiplicacion es: %f\n", multiplicacion(numeroA, numeroB));
		break;

	case 'E':
		printf("El factorial del numero A es: %d\n", factorial(numeroA));
		printf("El factorial del numero B es: %d\n", factorial(numeroB));
		break;
	}
}

/*
 * brief hace la suma de los numeros
 * param numeroA es el primer valor ingresado
 * param numeroB es el segundo valor ingresado
 * return muestra el resultado de la suma
 */

float suma(float numeroA, float numeroB) {
	return numeroA + numeroB;
}

/*
 * brief hace la resta de los numeros
 * param numeroA es el primer valor ingresado
 * param numeroB es el segundo valor ingresado
 * return muestra el resultado de la resta
 */
float resta(float numeroA, float numeroB) {
	return numeroA - numeroB;
}

/*
 * brief hace la division de los numeros
 * param numeroA es el primer valor ingresado
 * param numeroB es el segundo valor ingresado
 * return muestra el resultado de la division
 */
float division(float numeroA, float numeroB) {
	return numeroA / numeroB;
}

/*
 * brief hace la multiplicacion de los numeros
 * param numeroA es el primer valor ingresado
 * param numeroB es el segundo valor ingresado
 * return muestra el resultado de la multiplicacion
 */

float multiplicacion(float numeroA, float numeroB) {
	return numeroA * numeroB;
}

/*
 * brief hace el factorial  de los numeros
 * param numeroA es el primer valor ingresado
 * param numeroB es el segundo valor ingresado
 * return muestra el resultado del factorial
 */

int factorial(float num) {
	int numero = 1;
	int i;

	for (i = 1; i <= num; i++) {
		numero = numero * 1;
	}
	return numero;
}

int hacerCalculos(void) {
	float numeroA = 0;
	float numeroB = 0;
	char opcion;
	int num;

	do {
		menuPrincipal(numeroA, numeroB);

		getInt(&num, "Ingrese la opcion que desee:", "Error", 1, 5, 2);

		switch (num) {
		case 1:
			getFloat(&numeroA, "Ingrese el primer numero", "Error", -32768,
					32767, 2);
			break;

		case 2:
			getFloat(&numeroB, "Ingrese el segundo numero", "Error", -32768,
					32767, 2);
			break;

		case 3:
			menuOperaciones(&opcion);
			break;

		case 4:
			printf("%c",opcion);
			calcularOperaciones(numeroA,numeroB, opcion);
			break;

		case 5:
			break;
		}
	} while (num != 5);
	return 0;
}
