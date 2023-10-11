#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - check if a number is equal 
 * @array: the integer to check
 * @size: dcs rfef
 * @cmp: efww fewwf
 *
 * Return: if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && size && cmp)
		while (n < size)
		{
			if(cmp(array[n]))
				return (n);
			n++;
		}
	return (-1);
}
