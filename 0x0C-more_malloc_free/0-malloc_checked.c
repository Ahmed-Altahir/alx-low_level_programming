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
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
