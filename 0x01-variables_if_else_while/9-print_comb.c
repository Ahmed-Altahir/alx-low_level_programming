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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
