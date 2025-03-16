#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the strcut dos to print
 *
 * Description: If an element is NULL, pritns (nil) instead
 * If d is NULL, prints nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("name: %s\'n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.8f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
