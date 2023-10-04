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
	int si = 0;

	for (; s[si] != '\0'; si++)
	;
	return (si);
}

/**
 * *argstostr - check the code
 *
 * @ac: string
 * @**av: jdscndj ksacks
 *
 * Return: void
*/

char *argstostr(int ac, char **av)
{
	int n = 0, nc = 0, a = 0, cmp = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (0);

	for (; n < ac; n++, nc++)
		nc += _strlen(av[n]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (0);

	for (n = 0; n < ac; n++)
	{
		for (a = 0; av[n][a] != '\0'; a++, cmp++)
			s[cmp] = '\n';
		cmp++;
	}
	s[cmp] = '\0';
	return (s);
}
