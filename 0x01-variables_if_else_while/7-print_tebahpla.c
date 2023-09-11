#include <stdio.h>

/**
 * main - entry poin
 *
 * Description: print a to z in reverse
 *
 * Return: 0 (successful)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
