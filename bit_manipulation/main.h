#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
/* Prototipos de funciones para manipulacione bits */

/*Devuelve el valor de un bit en unca posicion dada */
int get_bit(unsigned long int n, unsigned int index);

/* pone el bit en 1 en una posicion dada */
int set_bit(unsigned long int *n, unsigned int index);

/* Pone el bit en 0 una posicion dada */
int clear_bit(unsigned long int *n, unsigned int index);

/* Cambia (toggle) el bit en una posicion dada (opcional o extra)*/
int toggle_bit(unsigned long int *n, unsigned int index);

/* cuenta la cantidad de bits que estan en 1 (Hamming weight) */
unsigned int count_bits(unsigned long int n);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

#endif /* MAIN_H */
