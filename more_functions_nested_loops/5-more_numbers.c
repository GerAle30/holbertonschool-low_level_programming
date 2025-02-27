#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * 10 times,each on a new line
 */
void more_numbers(void)
{
	int o;
	int u;

	for (o = 0; o < 10; o++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u >= 10)
			{
				_putchar((u / 10) + '0');
			}
			_putchar((u % 10) + '0');
		}
		_putchar('\n');
	}
}
