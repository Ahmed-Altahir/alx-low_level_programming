#include "main.h"
#include <stdio.h>

/**
 * *create_array - check the code
 *
 * @size: string
 * @c: blabla
 *
 * Return: void
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == NULL || n == NULL)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
