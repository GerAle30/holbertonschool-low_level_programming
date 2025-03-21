#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array: The array to iterate
 * @size: The size of the array
 * @action: Pointer to the function to be used
 *
 *This function iterates through an array and
 * applies the function 'action' to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
