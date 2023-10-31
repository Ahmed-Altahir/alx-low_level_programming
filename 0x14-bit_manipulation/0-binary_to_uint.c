#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - jwdck
 *
 * @b: kjdvd
 *
 * convert a binary number to an unsigned int
 * 
 * Return: 0
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (power = 1, total = 0, l--; l >= 0; l--, power *= 2)
	{
		if (b[l] == '1')
			total += power;
	}

	return (total);
}
