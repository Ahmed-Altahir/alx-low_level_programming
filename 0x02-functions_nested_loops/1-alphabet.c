#include "main.h"

/**
 * print_alphabet - use _putchar function to print_alphabet
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	putchar('\n');
}
