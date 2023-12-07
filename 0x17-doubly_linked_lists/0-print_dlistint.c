#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - fewef
 * @h: wfefwfa
 *
 * Return: ewfef few
*/
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
	{
		return (x);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
