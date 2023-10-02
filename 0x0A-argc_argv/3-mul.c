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
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
