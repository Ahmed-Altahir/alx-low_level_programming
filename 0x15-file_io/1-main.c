#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - e2k jk23e
 * @ac: jkef
 * @av: efck
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int s;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    s = create_file(av[1], av[2]);
    printf("-> %i)\n", s);
    return (0);
}
