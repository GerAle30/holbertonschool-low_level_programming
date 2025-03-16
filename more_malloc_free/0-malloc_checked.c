#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @size: The number of bytes to allocate
 *
 * Return: Apointer to the allocated memory
 * if malloc fails, the function exits with status 98
 *
 */
void *malloc_checked(unsigned int size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
