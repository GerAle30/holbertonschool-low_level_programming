#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - Initializes a struct dos variable
 * @d: Pointer to the struct dos variable to initialize
 * @name: The name to assign to the dos
 * @age : The age to assgin to the dos
 * @owner: the owner to assign to the dog
 *
 * Description: this function initializes the members of a struct dog
 * with the given values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Ensure d is not NULL */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
