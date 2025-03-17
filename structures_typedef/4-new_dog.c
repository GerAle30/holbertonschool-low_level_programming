#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog (dog_t), or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	/* Allocate memory for the dog structure */
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	/*Allocate memory for name and copy it */
	name_copy = malloc(strlen(name) + 1);
	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
