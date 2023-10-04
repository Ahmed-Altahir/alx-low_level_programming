#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - check the code
 *
 * @width: string
 * @height: blabla
 *
 * Return: void
*/

int **alloc_grid(int width, int height)
{
	int **t, n, a;

	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (0);
	}
	else
	{
		for (n = 0; n < height; n++)
		{
			t[n] = malloc(sizeof(**t) * width);
			if (t[n] == 0)
			{
				while (n--)
				free(t[n]);
				return (0);
			}

			for (a = 0; a < width; a++)
				t[n][a] = 0;
		}
	}

	return (t);
}
