#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: dcs rfef
 * @cmp: efww fewwf
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && size && cmp)
		while (n < size)
		{
			if(cmp(arrayp[n]))
				return (n);
			n++;
		}
	return (-1);
}
