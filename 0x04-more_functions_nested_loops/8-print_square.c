#include "main.h"

/**
 * print_square - check if c is upper
 *
 * @size: num of the _ times
 *
 * Return: always 0
*/

void print_square(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
