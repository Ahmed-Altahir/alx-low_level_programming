#include "main.h"

/**
 * _islower - function to check if characyer is lowercase
 *
 * print_alphabet - use _putchar function to print_alphabet
 *
 * Return: returns 1 if c is lowercase otherwise always 0 (successful)
*/

int main(void)
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
