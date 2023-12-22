#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_djb2 - efwefef
 * @s: fwefwef
 * Return: hashish
 */
unsigned long int hash_djb2(const unsigned char *s)
{
	unsigned long int hashish;
	int j;

	hashish = 5381;
	while ((j = *s++))
	{
		hashish = ((hashish << 5) + hashish) + j; /* hashish * 33 + c */
	}
	return (hashish);
}

