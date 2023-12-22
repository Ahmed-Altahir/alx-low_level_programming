#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_get - trvrtvrtv
 * @ht: tvtvvt
 * @key: rtvklmv
 * Return: klrvvmrv
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *node;
unsigned long int i;

if (ht == NULL)
	return (NULL);

i = key_index((const unsigned char *) key, ht->size);
node = ht->array[i];

while (node != NULL)
{
	if (strcmp(node->key, key) == 0)
		return (node->value);

	node = node->next;
}
return (NULL);
}
