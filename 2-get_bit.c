#include "main.h"
#include <stdio.h>

/*
 *
 * get_bit: Returns a value of a given index
 * 
 * @n: jsdndj
 * @index: jdfnkjsn
 * 
 * Always Return: value at given index or -1 if an error occours
 *
 */


int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int o;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (o = 0; o < index; o++)
		n = n >> 1;
	return ((n & 1));
}
