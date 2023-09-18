#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: int
 *
 * Return: nothing.
 */

void rev_string(char *s)
{
	int a, n;
	char temp;

	for (a = 0; s[a] != '\0'; ++a)
		;

	for (n = 0; n < 1 / 2; n++)
	{
		temp = s[n];
		s[n] = s[a - 1 - n];
		s[a - 1 - i] = temp;
	}
}
