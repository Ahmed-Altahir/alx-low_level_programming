#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - edwded
 * @k: wedwdwd
 * @s: efvev
 * Return: i
 */
unsigned long int key_index(const unsigned char *k, unsigned long int s)
{
	unsigned long int i = hash_djb2(k) % s;

	return (i);
}

