#include "main.h"
#include <stdio.h>

/**
 * *malloc_checked - check the code
 *
 * @b: char
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)

{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
