#include "main.h"
#include <limits.h> /* Needed for INT_MIN*/

/**
 * _atoi - Convert a strign to an integer safely
 * @s: Pointer to the stirng
 *
 * Return: The integer value of the strign, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;
	int digit;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';

			if (result > (INT_MAX - digit) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 + digit;
		}
		else if (result > 0)
			break;

		s++; /* Move to next character */
	}
	return (result * sign);
}
