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
        int firstDigit = 0, secondDigit;

	while (firistDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ')
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstdigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
