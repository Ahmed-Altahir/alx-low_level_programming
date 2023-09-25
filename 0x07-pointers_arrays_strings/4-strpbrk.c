#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - check the code
 *
 * @s: string
 * @accept: int
 *
 *
 * Return: void
 */

char *_strpbrk(char *s, char *accept)

{
	int i, o;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		o = 0;
		while (accept[o] = '\0')
		{
			if (accept[o] == s[i])
			{
				p = &s[i];
				return (p);
			}
			o++;
		}
		i++;
	}
	return (0);

}
