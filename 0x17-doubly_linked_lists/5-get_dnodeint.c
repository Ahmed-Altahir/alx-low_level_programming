#include "lists.h"

/**
 * get_dnodeint_at_index - weffewfe
 *
 * @head: wfefwf
 * @index: wefwefwef
 *
 * Return: 0
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (x < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		x++;
	}

	return (head);
}
