#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: int
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int cunt;

	for (cunt = 0; *s != '\0'; s++)
		++cunt;

	return (cunt);
}
