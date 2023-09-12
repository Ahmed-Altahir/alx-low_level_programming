#include <unistd>
#include <main.h>

/**
 * main - entry point
 *
 * Description: print a to z in reverse
 *
 * Return: 0 (successful)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
