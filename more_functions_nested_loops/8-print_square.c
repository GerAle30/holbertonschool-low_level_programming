#include "main.h"

/**
 * Print_square - -prints a square of '#' characters
 * @size: size of the square
 */
void print_square(int size)
{
	int i, b;

	if (size <= 0)
	{
		_putchar('\n'); /* If size is 0 or negative, print a newline */
	}
	else
	{
		for (i = 0; i < size; i++) /* loop through rows */
		{
			for (b = 0; b < size; b++) /* loop through columns */
			{
				_putchar('#'); /* Print a '#' character */
			}
			_putchar('\n'); /* Newline after each row */
		}
	}
}

