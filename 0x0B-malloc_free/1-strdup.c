#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - check the code
 *
 * @*str: string
 *
 *
 * Return: void
*/

char *_strdup(char *str)
{
	int n = 0, s = 0;
	char *m;

	if (str == NULL)
		return(NULL);

	for (; str[s] != '\0'; s++)
	;

	m = malloc(s * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; n < s; n++)
			m[n] = str[n];
	}
	return (m);
}
