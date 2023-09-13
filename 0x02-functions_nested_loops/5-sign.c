#include "main.h"

/**
 * print_sign - function to check if characyer is lowercase
 *
 * print_alphabet - use _putchar function to print_alphabet
 *
 * Return: returns 1 if c is lowercase otherwise always 0 (successful)
*/

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
