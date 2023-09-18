#include <unistd.h>
#include <main.h>

#include <stdio.h>

/**
 * main - entry point
 *
 * _putchar - write characters
 * @c: the character
 *
 * Return: on success1
 * on error -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
