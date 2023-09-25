#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *
 * @a: string
 * @size: blablabla
 *
 * Return: void
*/

void print_diagsums(int *a, int size)

{
	int i, e1 = 0, e2 = 0;

	for (i = 0; i < size; i++)
	{
		e1 += a[i];
		e2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", e1);
	printf("%d\n", e2);

}
