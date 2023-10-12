#include "variadic_functions.h"

/**
 * format_char - check the code
 * @separator: jfcndk
 * @ap: wfewf
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - check sda the code
 * @separator: jfcndk dDSAD
 * @ap: wfewf wdede
 */

void format_int(char *separator, va_list ap)
{
		printf("%s%d", separator, va_arg(ap, int));
}


/**
 * format_float - check sda the code dewd
 * @separator: jfcndk dDSAD wed
 * @ap: wfewf wdede wdw
 */

void format_float(char *separator, va_list ap)
{
		printf("%s%f", separator, va_arg(ap, double));
}


/**
 * format_string - fwefee check sda the code dewd
 * @separator: jfcndk fwfew dDSAD wed
 * @ap: wfewf wdede wdw tkgor4
 */

void format_string(char *separator, va_list ap)
{
		char *str = va_arg(ap, char*);

		switch ((int)(!str))
			case 1:
			str = "(nil)";

			printf("%s%s", separator, str);
}

/**
 * print_all - fwefee check sda the code dewd
 * @format: jfcndk fwfew dD klre
 */

void print_all(const char * const format, ...)
{
	int u = 0, h;
	char *separator = "";
	va_list ap;
	token_t tokens [] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format [u])
	{
		h = 0;
		while (tokens[h].token)
		{
			if (format[h] == tokens[h].token[0])
			{
				tokens[h].f(separator, ap);
				separator = ", ";
			}
			h++;
		}
		u++;
	}
	printf("\n");
	va_end(ap);
}
