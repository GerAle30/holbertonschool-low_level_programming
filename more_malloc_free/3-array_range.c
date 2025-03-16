#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: the starting value of array
 * @max: the ending value of the array
 *
 * Return: Pointer to the newly allocated array,
 * or NULL if min > max or memory allocation fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	/* Calculate size and allocate memory */
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Fill the array with values form min to max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
