#include "main.h"
#include <stdio.h>

/**
 * *_strchr - check the code
 *
 * @s: string
 * @c: int
 *
 *
 * Return: void
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
