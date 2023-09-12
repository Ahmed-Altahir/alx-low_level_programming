#include "main.h"

/**
 * main - entry point
 *
 * Description: use _putchar function to print_alphabet
 *
 * Return: 0 (successful)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');
}
