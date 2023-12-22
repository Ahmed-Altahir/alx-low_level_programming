#include "hash_tables.h"

/**
 * hash_table_create - efwwfwef
 * @s: wfeffef
 *
 * Return: 0
 */
hash_table_t *hash_table_create(unsigned long int s)
{
	hash_table_t *hash_table;
	unsigned long int n;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = s;
	hash_table->array = malloc(s * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (n = 0; n < s; n++)
		hash_table->array[n] = NULL;
	return (hash_table);
}

