#include "main.h"
#include <stdlib.h>

/**
 * free_grid - check the code
 *
 * @grid: string
 * @height: blabla
 *
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int n = 0;

	for (; n < height; n++)
		free(grid[n]);
	free(grid);
}
