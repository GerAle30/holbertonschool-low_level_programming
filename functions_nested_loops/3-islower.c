#include "main.h"
/**
 *
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (0);
	else
		return (1);
}
