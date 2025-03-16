#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new struct for a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
	char *name;

	float age;

	char *owner;
};

/*Typedef for strcut dog */
typedef struct dog dog_t;

/*Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* DOG_H */

