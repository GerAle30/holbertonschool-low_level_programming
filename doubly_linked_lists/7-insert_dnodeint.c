#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value to store in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	/* If index is 0, insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* Traverse the list to the desired position */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	/* If index is out of range (i.e., reached the end without finding idx) */
	if (!temp || i != idx - 1)
		return (NULL);

	/* Create the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	/*If we are not inserting at the end*/
	if (temp->next)
		temp->next->prev = new_node;

	/* Update the next pointer of the previous node*/
	temp->next = new_node;

	return (new_node);
}

