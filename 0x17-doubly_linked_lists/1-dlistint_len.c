#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - mwnef ewd
 * @h: wdedd
 * Return: dewdwdew
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}

	return (x);
}
