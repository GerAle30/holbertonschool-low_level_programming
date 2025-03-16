#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero
 * @nmemb: Number of ellements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, NULL if nmemb
 * or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	/*Check if parameters are valid */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to 0 */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}

