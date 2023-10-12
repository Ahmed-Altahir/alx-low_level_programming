#include "variadic_functions.h"

/**
 * print_numbers - check the code
 *
 * @separator: hjjhb
 * @n: dkfjfk
 * @...: jdhcbjas
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int u = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (u--)
		printf("%d%s", va_arg(ap, int),
				u ? (separator ? separator : "") : "\n");
	va_end(ap);
}
