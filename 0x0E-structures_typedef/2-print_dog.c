#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * print_dog - wdwd
 * @d: ndcne
 *
 * Return: wceuineiui
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner : "(nil)");
	}
}