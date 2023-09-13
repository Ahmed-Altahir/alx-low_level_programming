#include "main.h"

/**
 * print_to_98 - function to check if characyer is lowercase
 *
 * @n: input
 *
 *
*/

void print_to_98(int n)
{
	int cunt;

	if (n > 98)
		for (cunt = n; cunt > 98; cunt--)
			printf("%d, ", cunt);
	else
		for (cunt = n; cunt < 98; cunt++)
			printf("%d, ", cunt);
	printf("98\n");

}
