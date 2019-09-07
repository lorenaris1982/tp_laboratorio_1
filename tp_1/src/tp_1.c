/*
 ============================================================================
 Name        : tp_1.c
 Author      : Lorena
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define EXIT_ERROR -1

int main(void) {

	if(hacerCalculos()==-1)
			{
				printf("No se pudo calcular");
			}
	return EXIT_SUCCESS;
}
