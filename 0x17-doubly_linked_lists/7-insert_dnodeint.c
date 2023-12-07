#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - weffeff
 *
 * @h: wfwfwefwef
 * @idx: fewwfwf
 * @n: weffwf
 *
 * Return: fewfwfwf
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *traverse, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	traverse = *h;

	for (; idx != 1; idx--)
	{
		traverse = traverse->next;
		if (traverse == NULL)
			return (NULL);
	}
	if (traverse->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = traverse;
	new_node->next = traverse->next;
	traverse->next->prev = new_node;
	traverse->next = new_node;
	return (new_node);

}
