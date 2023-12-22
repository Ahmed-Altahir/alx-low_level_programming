#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_print - cmdcwec
 * @h: ekrverer
 */
void hash_table_print(const hash_table_t *h)
{

unsigned long int x;
hash_node_t *node;
short int y = 0;

if (h == NULL)
	return;

putchar('{');
for (x = 0; x < h->size; x++)
{
	node = h->array[x];
	while (node != NULL)
	{
		if (y)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (y == 0)
			y = 1;
	}
}
printf("}\n");
}
