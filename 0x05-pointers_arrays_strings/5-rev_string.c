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
	int l = 0, i = 0;
	char temp;

	while (s[i++])
	l++;

	for (i = l - 1; i >= l / 2; i--)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
