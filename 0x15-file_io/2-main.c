#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac: kfejef
 * @av: jfdkn
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int e;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    e = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", e);
    return (0);
}
