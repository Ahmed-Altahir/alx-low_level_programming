#include "variadic_functions.h"

/**
 * print_strings - check the code
 *
 * @separator: jsbd kjasd
 * @n: akdbk
 * @...: jeckje
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int u = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (u--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				u ? (separator ? separator : "") : "\n");
	va_end(ap);
}
