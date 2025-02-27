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
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

