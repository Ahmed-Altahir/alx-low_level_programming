#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 *
 * Prints the binary representation of a number
 *
 * @n: kjec
 *
 * Return: nothing
 *
 */

void print_binary(unsigned long int n)

{
	char o;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	o = (n & 1) ? '1' : '0';
	_putchar(o);
}
