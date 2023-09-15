#include "main.h"

/**
 * print_number - check if c is upper
 *
 * @n: num of the _ times
 *
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + 48);

}
