#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * free_dog - wdwd
 * @d: ndcne
 *
 * Return: wceuineiui
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		 if (d->owner)
                        free(d->owner);
		 free(d);
	}
}
