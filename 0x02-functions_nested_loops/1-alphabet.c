#include <main.h>

/**
 * main - entry point
 *
 * Description: print a to z in reverse
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
