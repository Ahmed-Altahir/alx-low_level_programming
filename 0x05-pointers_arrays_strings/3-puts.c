#include "main.h"

/**
 * _puts - check the code
 *
 * @str: int
 *
 * Return: nothing.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(*str + 0);
		str++;
	}
	_putchar('\n');
}
