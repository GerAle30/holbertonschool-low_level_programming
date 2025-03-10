#include "main.h"

/**
 * _pow_recursion - Returns the vlaue of 'x' raised to the power pf 'y'
 * @x: The base number
 * @y: the exponent
 *
 * Return: The result of 'x' raised to the power pf 'y',
 * or -1 if 'y' is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
