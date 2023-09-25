#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - check the code
 *
 * @a: string
 *
 * Return: void
*/

void print_chessboard(char (*a)[8])

{
	int i, o;

	for (i = 0; i < 8; i++)
	{
		for (o = 0; 0 < 8; o++)
		{
			_putchar(a[i][o]);
		}
		_putchar('\n');
	}

}
