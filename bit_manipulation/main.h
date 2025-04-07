#ifndef MAIN_H
#define MAIN_H

/* Prototipos de funciones para manipulacione bits */

/*Pone el prototipo de _putchar por si lo necesitas */
int _putchar(char c);

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

#endif /* MAIN_H */
