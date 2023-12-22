#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - fjkkwe
 * @h: wekle
 */
void hash_table_delete(hash_table_t *h)
{
unsigned long int x;
hash_node_t *n;

if (h == NULL)
	return;

for (x = 0; x < h->size; x++)
{
	n = h->array[x];
	free_hash_list(n);
}
free(h->array);
free(h);
}


/**
 * free_hash_list - wejkfe
 * @head: ejneke
 */
void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
