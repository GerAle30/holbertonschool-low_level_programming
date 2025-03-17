#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free memory allocated for a dog_t structure
 * @d: Pointer to the dog structure to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	/*Free dynamically allocated name and owner */
	free(d->name);
	free(d->owner);
	free(d);
}

