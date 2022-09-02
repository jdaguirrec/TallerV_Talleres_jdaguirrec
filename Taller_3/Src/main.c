/**
 ******************************************************************************
 * @file           : main.c
 * @author         : jdaguirrec
 * @brief          : Taller número 3 con el monitor
 ******************************************************************************
 */
// Librería variables
#include <stdint.h>

// Librería para tipos de variables booleanas
#include <stdbool.h>

// Librería para operaciones matemáticas
#include <math.h>

#define NOP() __asm("NOP")

void miPrimeraFuncion(void);

uint8_t getMaxChar(void);

int main(void){

	miPrimeraFuncion();

	while(1){

		miPrimeraFuncion();

	}

}

void miPrimeraFuncion(void){

	// Manejo de variables booleanas

	uint8_t miPrimeraBandera = true;
	uint8_t miSegundaBandera = false;

	uint8_t XOR = miPrimeraBandera ^ miSegundaBandera;
	uint8_t OR = miPrimeraBandera || miSegundaBandera;
	uint8_t AND = miPrimeraBandera && miSegundaBandera;

	XOR ^= 1;
	XOR ^= 1;
}
