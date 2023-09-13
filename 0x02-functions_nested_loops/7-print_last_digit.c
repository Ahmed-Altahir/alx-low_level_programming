#include "main.h"

/**
 * print_last_digit - function to check if characyer is lowercase
 *
 * print_alphabet - use _putchar function to print_alphabet
 *
 * @n: takes number input
 *
 * Return: returns 1 if c is lowercase otherwise always 0 (successful)
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);

}
