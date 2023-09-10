#include <stdio.h>

/**
 * main entry point
 *
 * Description: print alphabet letter in lowercase
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
