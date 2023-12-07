#include "lists.h"

/**
 * free_dlistint - fewewf
 *
 * @head: fgsbgbf
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

	head = NULL;
}
