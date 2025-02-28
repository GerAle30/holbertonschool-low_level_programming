#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to the first interger
 * @b: pointer to the second interger
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

