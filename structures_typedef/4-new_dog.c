#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - computes the length of a string manually
 * @s: The string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies a string manually
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog -Creates a new dog structure
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function dynamically allocates memory
 * for new dog structure, copies the provided name and
 * owner strign into new memory spaces, and initializes
 * the age field
 *
 * Return: Pointer to the newly created dog (dog_t)
 * or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0;

	/*Handle NULL inputs */
	if (!name || !owner)
		return (NULL);

	/*Allocates memory for dof structure */
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	/*Allocate memory for name& */
	name_copy = malloc(name_len + 1);
	if (name_copy)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(name_copy, name);

	owner_copy = malloc(owner_len + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	/*assogn values to strcuture */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

		return (dog);
}

