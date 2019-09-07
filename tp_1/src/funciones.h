/*
 * funciones.h
 *
 *  Created on: 6 sep. 2019
 *      Author: LOREN
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_



#endif /* FUNCIONES_H_ */

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos);

int getFloat(float *resultado,
			 char *mensaje,
			 char *mensajeError,
			 float minimo,
			 float maximo,
			 int reintentos);

int getChar( char *resultado,
			 char *mensaje,
			 char *mensajeError,
			 char minimo,
			 char maximo,
			 int reintentos);

void menuPrincipal (int numeroA, int numeroB);

void menuOperaciones (char *opcion);

void calcularOperaciones (float numeroA, float numeroB, char operaciones);

float suma(float numeroA, float numeroB);

float resta(float numeroA, float numeroB);

float division(float numeroA, float numeroB);

float multiplicacion(float numeroA, float numeroB);

int factorial(float num);

int hacerCalculos (void);
