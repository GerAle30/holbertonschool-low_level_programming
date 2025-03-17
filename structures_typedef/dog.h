#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new struct for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog
{
	char *name;

	float age;

	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);


/*Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

void free_dog(dog_t *d);
#endif /* DOG_H */

