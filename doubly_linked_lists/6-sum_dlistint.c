#include "lists.h"

/**
 * sum_dlistint- Returns the sum of all the data (n) of a dlistint_t list
 * @head: Pointer to the head of the list
 * Return: the sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n; /* Add the value of the current node to sum */
		head = head->next; /* Move to the next node */
	}

	return (sum); /* Return the sum of all node values */
}
