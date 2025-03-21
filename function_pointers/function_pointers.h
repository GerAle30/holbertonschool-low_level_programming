#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>



/**
* print_name - Calls a function to print a name
* @name: the name to print
* @f: Pointer to a function that prints a name
*
* Description: This function takes a string and a function pointer
* It calls the function pointer with the given string
*/
void print_name(char *name, void (*f)(char *));

#endif /*FUNCTION_POINTERS_H */
