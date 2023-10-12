#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: hfdbvh lsjand
 * @...: hbchsebcj
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int a = 0, u = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (u--)
		a += va_arg(ap, int);
	va_end(ap);
	return (a);
}
