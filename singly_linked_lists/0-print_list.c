#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head od the linked list.
 *
 * return: The number of nodes in the list.
 */
sizr_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
		}
	return (count);
}
