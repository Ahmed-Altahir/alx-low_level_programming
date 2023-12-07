#include "lists.h"

/**
 * delete_dnodeint_at_index - jkwednkd
 *
 * @head: ewdkjdkjwe
 * @index: dwedwdd
 *
 * Return: 0
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *traverse = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (traverse == NULL)
			return (-1);
		traverse = traverse->next;
	}

	if (traverse == *head)
	{
		*head = traverse->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		traverse->prev->next = traverse->next;
		if (traverse->next != NULL)
			traverse->next->prev = traverse->prev;
	}
	free(traverse);
	return (1);
}
