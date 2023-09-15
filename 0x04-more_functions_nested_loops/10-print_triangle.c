#include "main.h"

/**
 * print_triangle - check if c is upper
 *
 * @size: num of the _ times
 *
 * Return: always 0
*/

void print_triangle(int size)
{
	int h, b;

	if (s <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= s; h++)
		{
			for (b = 1; b <= s; b++)
			{
				if ((h + b) <= s)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}

}
