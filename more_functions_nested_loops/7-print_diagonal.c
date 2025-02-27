#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of backslashes to print.
 */
void print_diagonal(int n)
{
	int i, g;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (g = 0; g < i; g++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
