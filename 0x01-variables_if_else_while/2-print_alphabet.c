#include <stdio.h>

/**
 * main entry point
 *
 * Description: print all alphabet letters in lowercase
 *
 * Return: 0 (successful)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

return (0);
}
