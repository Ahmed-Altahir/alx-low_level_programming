#include <stdio.h>

/**
 * main - entry poin
 *
 * Description: count from 0 to 9
 *
 * Return: 0 (successful)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

return (0);
}
