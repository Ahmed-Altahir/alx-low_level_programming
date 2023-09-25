#include "main.h"
#include <stdio.h>

/**
 * _strspn - check the code
 *
 * @s: string
 * @accept: int
 *
 *
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, o;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (o = 0; accept[o] != s[i]; o++)
		{
			if (accept[o] == '\0')
				return (i);
		}
	}
	return (i);
}
