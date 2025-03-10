#include "main.h"
#include <stdlib.h>

/**
 * cfreate_array - Creates an array of chars, and initializes it with a
 * specific char
 * @size: The size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: A poitner to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if(array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] =  c;

	return (array);
}
