#ifndef FUNCTION_POITNERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_ name - Function prototype for printing a name
 * @name: Pointer to the name string
 * @f: Function pointer to the print function
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int(*cmp)(int));

#endif /*FUNCTION_POINTERS_H */
