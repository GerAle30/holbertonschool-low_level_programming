#include "main.h"

/**
 * _abs-absolute value of an int
 * @n: The integer whose absolute value is computed
 *
 * Return: absolute value of a integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n); /* If n is negative, return its positive counterpart*/
	else
		return (n); /* If n is positive or zero, return it as is */
}
