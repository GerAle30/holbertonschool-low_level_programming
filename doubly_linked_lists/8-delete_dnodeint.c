#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete the node at index of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @index: the index of the node to delete (starting at 0)
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	/* Delete head node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse to the node at the given index*/
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	/* Disconnect the node */
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
