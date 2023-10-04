#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check the code
 *
 * @s: string
 *
 * Return: void
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}


/**
 * *str_concat - check the code
 *
 * @s1: string
 * @s2: dnc ksdj
 *
 * Return: void
*/

char *str_concat(char *s1, char *s2)
{
	int si1, si2, n;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	si1 = _strlen(s1);
	si2 = _strlen(s2);
	m = malloc((si1 + si2) *sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (n = 0; n <= si1 + si2; n++)
	{
		if (n < si1)
			m[n] = s1[n];
		else
			m[n] = s2[n - si1];
	}
	m[n] = '\0';
	return (m);
}
