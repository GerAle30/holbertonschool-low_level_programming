#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 * @size: size pof the triangle
 */
void print_triangle(int size)
{
	int h, v;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (v = 1; v <= size - h; v++)
			{
				_putchar(' ');
			}

			for (v = 1; v <= h; v++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
