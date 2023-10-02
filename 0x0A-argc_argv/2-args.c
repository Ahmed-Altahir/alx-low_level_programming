#include <stdio.h>

/**
 * main - check the code
 *
 * @argc: string
 * @argv: blabla
 *
 *
 * Return: void
*/

int main(int argc, char const *argv[])
{
	int n = 0;

	while (argc--)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
