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
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}


/**
 * *_calloc - check the code
 *
 * @nmemb: string
 * @size: int
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
