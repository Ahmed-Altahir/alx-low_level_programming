#include "main.h"
#include <stdio.h>

/**
 * *_memset - check the code
 *
 * @s: string
 * @n: int
 * @b: char
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);

}
