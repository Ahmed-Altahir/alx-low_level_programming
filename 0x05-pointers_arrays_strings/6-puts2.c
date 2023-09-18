#include "main.h"

/**
 * puts2 - check the code
 *
 * @str: int
 *
 * Return: nothing.
 */

void puts2(char *str)
{
	int i;
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}

	for (i = 0; i < p; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
