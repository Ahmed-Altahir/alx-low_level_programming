#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_set - fvevv
 * @h: vfevefv
 * @k: mdsjkhf
 * @v: klwec wel
 * Return: 1 on success 0 on fail
 */
int hash_table_set(hash_table_t *h, const char *k, const char *v)
{

hash_node_t *node;
hash_node_t *new_node;
unsigned long int i;

if (h == NULL || *k == '\n' || *v == '\n')
	return (0);

i = key_index((const unsigned char *)k, h->size);
node = h->array[i];

if (node == NULL)
{
	new_node = create_new_node(k, v);
	if (new_node == NULL)
		return (0);

	h->array[i] = new_node;
	return (1);
}


while (node != NULL)
{
	if (strcmp(k, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(v);
		return (1);
	}
	node = node->next;
}

new_node = create_new_node(k, v);
if (new_node == NULL)
	return (0);

new_node->next = h->array[i];
h->array[i] = new_node;
return (1);
}

/**
 * create_new_node - jkefe
 * @k: jkfvkje
 * @v: ejkrvev
 * Return: rvevr
 */

hash_node_t *create_new_node (const char *k, const char *v)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(k);
	new_node->value = strdup(v);
	new_node->next = NULL;

	return (new_node);
}
