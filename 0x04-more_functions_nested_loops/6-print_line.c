#include "main.h"

/**
 * print_line - check if c is upper
 *
 * @n: num of the _ times
 *
 * Return: always 0
*/

void print_line(int n)
{
	int shit;
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (shit = 1; shit <= n; shit++)
			_putchar('_');
		_putchar('\n');
	}
}
