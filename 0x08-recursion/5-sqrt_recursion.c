#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 *
 * @n: string
 * @val: blabla
 *
 *
 *
 * Return: void
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - check the code
 *
 * @n: string
 * @val: blabla
 *
 * Return: int
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
