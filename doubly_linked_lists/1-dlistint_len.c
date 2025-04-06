#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;  /* Increment the counter */
		h = h->next; /* Move to the next node */
	}

	return (count);
}

