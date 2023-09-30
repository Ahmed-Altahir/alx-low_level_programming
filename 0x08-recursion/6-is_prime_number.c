#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 *
 * @on : string
 * @n: blabla
 *
 *
 * Return: void
*/

int check_prime(int n, int on);
int  is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check the code
 *
 * @on : string
 * @n: blabla
 *
 *
 * Return: void
*/

int check_prime(int n, int on)
{
	if (on >= n && n > 1)
		return (1);
	else if (n % on == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, on + 1));
}
